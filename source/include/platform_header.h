#pragma once

#if __APPLE__
#if __has_feature(ptrauth_calls)
#include <ptrauth.h>
#endif
#endif

#if defined(BUILDING_KERNEL)
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stddef.h>
#include <math.h>
#include <machine/limits.h>
#else
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#if defined(__linux__) || defined(__APPLE__)
#include <unistd.h>
#include <syslog.h>
#endif
#endif

#if defined(BUILDING_KERNEL)
#include "kernel_mode_header.h"
#endif

#ifdef __cplusplus
#define abs(a) ((a) < 0 ? -(a) : (a))
#include "ArxContainer.h"
#define std arx
#endif