#pragma once

#include <linux/version.h>

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 3, 0)
#include "linux_clone3.h"

namespace fast_io
{

using ::fast_io::linux_clone3_thread;

namespace this_thread
{


}

} // namespace fast_io

#else
#error "to be implemented linux_clone_thread"
#include "linux_clone.h"
#endif
