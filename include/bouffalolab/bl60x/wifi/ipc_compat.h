/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2018 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/**
 ****************************************************************************************
 *
 * @file ipc_compat.h
 * Copyright (C) Bouffalo Lab 2016-2018
 *
 ****************************************************************************************
 */


#ifndef IPC_COMPAT_H_
#define IPC_COMPAT_H_


/* Zephyr's <zephyr/toolchain/gcc.h> defines __WARN(msg) too — undef the
 * Zephyr definition first so the vendor-style argless __WARN() works here.
 * The vendor IPC code only uses the no-arg form. */
#ifdef __WARN
#undef __WARN
#endif
#define __WARN()        bflb_os_printf("%s:%d\r\n", __func__, __LINE__)

#define WARN_ON(condition) ({                       \
    int __ret_warn_on = !!(condition);              \
    if (__ret_warn_on)                              \
        __WARN();                                   \
    __ret_warn_on;                                  \
    })

#define WARN_ON_ONCE(condition) ({          \
    static bool __warned;                   \
    int __ret_warn_once = !!(condition);    \
                                            \
    if (__ret_warn_once)                    \
        if (WARN_ON(!__warned))             \
            __warned = true;                \
    __ret_warn_once;                        \
    })

#define __round_mask(x, y) ((__typeof__(x))((y)-1))
#define round_up(x, y) ((((x)-1) | __round_mask(x, y))+1)
#define round_down(x, y) ((x) & ~__round_mask(x, y))

#define ASSERT_ERR(condition)   assert(condition)

#endif /* IPC_COMPAT_H_ */
