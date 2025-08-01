/*
 * Copyright (c) 2025 Bouffalo lab
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once
 
#define BFLB_EF_CTRL_BASE ((uint32_t)0x40007000)

#define EF_CTRL_EFUSE_CYCLE_PROTECT (0xbf << 24)
#define EF_CTRL_EFUSE_CTRL_PROTECT  (0xbf << 8)
#define EF_CTRL_OP_MODE_AUTO        0
#define EF_CTRL_PARA_DFT            0

#define EF_CTRL_EF_CLK   0
#define EF_CTRL_SAHB_CLK 1

#define EF_CTRL_DFT_TIMEOUT_VAL (160 * 1000)

#define EF_CTRL_EFUSE_R0_SIZE 128

#define CORECLOCKREGISTER 0x4000F108
