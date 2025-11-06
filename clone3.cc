#include <cstdio>
#include <unistd.h>
#include <linux/futex.h>
#include <linux/sched.h>
#include "include/fast_io.h"

static void millisleep(int ms) {
    long ts[] = {ms / 1000, ms % 1000 * 1000000L};
    syscall(SYS_nanosleep, ts, ts);
}

void foo() {}

int main() {
    auto thread =
    ::fast_io::linux_clone3_thread(
        []() static {
            millisleep(100);
            ::fast_io::println("child tid: ", gettid());
        }
    );
    ::fast_io::println("father tid: ", gettid());

    thread.join();

    return 0;
}
