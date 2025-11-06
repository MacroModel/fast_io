#include <cstdio>
#include <unistd.h>
#include <linux/futex.h>
#include <linux/sched.h>
#include <sys/syscall.h>
#include <time.h>
#include "include/fast_io.h"

static void millisleep(int ms) {
    timespec ts{ms / 1000, (ms % 1000) * 1000000L};
    (void)::fast_io::system_call<__NR_nanosleep, long>(&ts, nullptr);
}

static ::pid_t my_gettid() {
    return ::fast_io::system_call<__NR_gettid, ::pid_t>();
}

void foo() {}

int main() {
    auto thread =
    ::fast_io::linux_clone3_thread(
        []() static {
            millisleep(100);
            ::fast_io::println(::fast_io::err(), "child tid: ", my_gettid());
        }
    );
    ::fast_io::println(::fast_io::err(), "father tid: ", my_gettid());

    thread.join();
    ::fast_io::println(::fast_io::err(), "2");
    return 0;
}
