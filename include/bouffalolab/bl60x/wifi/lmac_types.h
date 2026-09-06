/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2018 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/**
 ****************************************************************************************
 *
 * @file lmac_types.h
 * Copyright (C) Bouffalo Lab 2016-2018
 *
 ****************************************************************************************
 */


#ifndef LMAC_TYPES_H_
#define LMAC_TYPES_H_


/**
 ****************************************************************************************
 * @addtogroup CO_INT
 * @ingroup COMMON
 * @brief Common integer standard types (removes use of stdint)
 *
 * @{
 ****************************************************************************************
 */


/*
 * DEFINES
 ****************************************************************************************
 */


typedef uint8_t u8_l;
typedef int8_t s8_l;
typedef bool bool_l;
typedef uint16_t u16_l;
typedef int16_t s16_l;
typedef uint32_t u32_l;
typedef int32_t s32_l;
typedef uint64_t u64_l;

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int32_t s32;
typedef int8_t s8;

typedef uint64_t __le64;
typedef uint32_t __le32;
typedef uint16_t __le16;

typedef uint32_t __be32;
typedef uint16_t __be16;

/* @} CO_INT */
#endif /* LMAC_TYPES_H_ */
