/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2026 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define CFG_AMSDU_8K
#define CFG_TXDESC0 12
#define CFG_TXDESC1 64
#define CFG_TXDESC2 12
#define CFG_TXDESC3 12
#define CFG_TXDESC4 2

#undef CFG_BARX
#undef CFG_BATX

#define CFG_BARX 12
#define CFG_BATX 12
#define CFG_REORD_BUF 12

/* Missing values, checked against blob */
#define CFG_TWT 8
