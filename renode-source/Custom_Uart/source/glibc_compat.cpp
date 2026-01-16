// Compatibility shims for older glibc versions.
//
// Some toolchains (new glibc headers) emit references to ISO C23 entry points like
// `__isoc23_strtoul` (introduced in glibc 2.38). Older distros don't provide those
// symbols, which breaks loading the cosimulation .so.
//
// We provide a local implementation so the shared library can run on older glibc.

#include <cstdlib>
#include <cstdint>
#include <cerrno>
#include <fcntl.h>
#include <unistd.h>
#include <sys/syscall.h>

extern "C" unsigned long __isoc23_strtoul(const char* nptr, char** endptr, int base)
{
    return std::strtoul(nptr, endptr, base);
}

extern "C" uint32_t arc4random(void)
{
    uint32_t out = 0;

    // Prefer getrandom syscall (available on older glibc kernels via SYS_getrandom).
    // We use syscall() directly to avoid any libc symbol/version dependency.
    errno = 0;
    const long ret = syscall(SYS_getrandom, &out, sizeof(out), 0);
    if(ret == static_cast<long>(sizeof(out))) {
        return out;
    }

    // Fallback: /dev/urandom
    const int fd = open("/dev/urandom", O_RDONLY | O_CLOEXEC);
    if(fd >= 0) {
        const ssize_t r = read(fd, &out, sizeof(out));
        close(fd);
        if(r == static_cast<ssize_t>(sizeof(out))) {
            return out;
        }
    }

    // Last-resort fallback: deterministic (should be extremely unlikely to hit).
    static uint32_t x = 0x6d2b79f5u;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return x;
}

