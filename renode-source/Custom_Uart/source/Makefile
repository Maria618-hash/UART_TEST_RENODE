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

# Many users run Renode on older distros/VMs with an older libstdc++ runtime.
# To avoid runtime errors like:
#   "libstdc++.so.6: version `GLIBCXX_3.4.xx' not found"
# we statically link libstdc++/libgcc into libVuart.so by default.
STATIC_LIBSTDCXX ?= 1
ifeq ($(STATIC_LIBSTDCXX),1)
LINK_EXTRA_FLAGS := -static-libstdc++ -static-libgcc
else
LINK_EXTRA_FLAGS :=
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
ifeq ($(strip $(VERILATED_OBJS)),)
libVuart.so: verilate $(INTEG_OBJS)
else
libVuart.so: $(INTEG_OBJS)
endif
	cd $(SRC_DIR) && \
	$(CXX) -shared -fPIC -o libVuart.so \
		$(OBJ_DIR)/*.o \
		$(abspath $(INTEG_OBJS)) \
		$(LINK_EXTRA_FLAGS) \
		-lz

# ----------------------------
# Clean
# ----------------------------
clean:
	rm -rf $(BUILD_DIR)
	rm -f $(SRC_DIR)/libVuart.so
	rm -rf $(SRC_DIR)/$(OBJ_DIR)

.PHONY: all clean verilate

