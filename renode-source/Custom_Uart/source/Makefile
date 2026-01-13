# ============================
# Paths
# ============================
REPO_ROOT        := $(realpath ../..)
INTEG_DIR        := $(realpath ../../src/Plugins/CoSimulationPlugin/IntegrationLibrary)
SOCKET_DIR       := $(INTEG_DIR)/libs/socket-cpp/Socket
RENODE_INCLUDE   := $(realpath ../../src/Infrastructure/src/Emulator/Cores/renode/include)
SRC_DIR          := $(CURDIR)

VERILATOR_SRC    := uart_top.v
WRAPPER          := uart_wrapper.cpp
OBJ_DIR          := obj_dir
BUILD_DIR        := build

# ============================
# Compiler and Flags
# ============================
CXX      := g++
CXXFLAGS := -fPIC -DVM_TRACE \
	-I$(INTEG_DIR)/src \
	-I$(INTEG_DIR) \
	-I$(RENODE_INCLUDE)

LDFLAGS  := -shared -lz

# Many users run Renode on older distros/VMs with an older C++ runtime.
# - Statically linking libstdc++ avoids GLIBCXX mismatches.
# - Linking libgcc dynamically avoids pulling newer glibc loader symbols
#   (e.g. `_dl_find_object@GLIBC_2.35`) into the library.
STATIC_LIBSTDCXX ?= 1
STATIC_LIBGCC    ?= 0

LINK_EXTRA_FLAGS :=
ifeq ($(STATIC_LIBSTDCXX),1)
LINK_EXTRA_FLAGS += -static-libstdc++
endif
ifeq ($(STATIC_LIBGCC),1)
LINK_EXTRA_FLAGS += -static-libgcc
endif

# ============================
# Integration Library Sources
# ============================
INTEG_SRCS := \
	$(INTEG_DIR)/src/buses/wishbone.cpp \
	$(INTEG_DIR)/src/renode_bus.cpp \
	$(INTEG_DIR)/src/peripherals/uart.cpp \
	$(INTEG_DIR)/src/buses/bus.cpp \
	$(INTEG_DIR)/src/communication/socket_channel.cpp \
	$(SOCKET_DIR)/Socket.cpp \
	$(SOCKET_DIR)/TCPClient.cpp

INTEG_OBJS := $(patsubst $(INTEG_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(INTEG_SRCS))
COMPAT_OBJ := $(BUILD_DIR)/glibc_compat.o

# ============================
# Build Targets
# ============================
all: libVuart.so

# ----------------------------
# Compile IntegrationLibrary
# ----------------------------
$(BUILD_DIR)/%.o: $(INTEG_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(COMPAT_OBJ): glibc_compat.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ----------------------------
# Run Verilator
# ----------------------------
verilate:
	verilator --cc $(VERILATOR_SRC) --exe $(WRAPPER) \
		-CFLAGS "$(CXXFLAGS)" \
		-LDFLAGS "$(LDFLAGS)" \
		--trace-fst \
		--build -j

# ----------------------------
# Build shared library (.so)
# ----------------------------
# If Verilator is not available, but the generated objects already exist in $(OBJ_DIR),
# allow rebuilding just the integration library objects and relinking the .so.
VERILATED_OBJS   := $(wildcard $(OBJ_DIR)/*.o)
# Avoid linking in Verilator's threaded runtime to improve portability (it pulls
# in pthread symbols versioned as GLIBC_2.34+ on newer glibc).
VERILATED_OBJS_NO_THREADS := $(filter-out $(OBJ_DIR)/verilated_threads.o,$(VERILATED_OBJS))
ifeq ($(strip $(VERILATED_OBJS)),)
libVuart.so: verilate $(INTEG_OBJS) $(COMPAT_OBJ)
else
libVuart.so: $(INTEG_OBJS) $(COMPAT_OBJ)
endif
	cd $(SRC_DIR) && \
	$(CXX) -shared -fPIC -o libVuart.so \
		$(VERILATED_OBJS_NO_THREADS) \
		$(abspath $(INTEG_OBJS)) \
		$(abspath $(COMPAT_OBJ)) \
		$(LINK_EXTRA_FLAGS) \
		-ldl \
		-lz

# ----------------------------
# Clean
# ----------------------------
clean:
	rm -rf $(BUILD_DIR)
	rm -f $(SRC_DIR)/libVuart.so
	rm -rf $(SRC_DIR)/$(OBJ_DIR)

.PHONY: all clean verilate

