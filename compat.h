/* SPDX-License-Identifier: GPL-2.0 */

/*
 * Copy from include/linux/compiler_attributes.h
 */
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif

#ifndef fallthrough
#if __has_attribute(__fallthrough__)
#define fallthrough __attribute__((__fallthrough__))
#else
#define fallthrough do {} while (0)  /* fallthrough */
#endif
#endif

/*
 * Copy from include/linux/build_bug.h
 */
#ifndef static_assert
#define static_assert(expr, ...) __static_assert(expr, ##__VA_ARGS__, #expr)
#define __static_assert(expr, msg, ...) _Static_assert(expr, msg)
#endif
