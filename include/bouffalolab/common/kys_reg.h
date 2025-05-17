/**
 ******************************************************************************
 * @file    kys_reg.h
 * @version V1.0
 * @date    2022-11-17
 * @brief   This file is the description of.IP register
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2022 Bouffalo Lab</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without
 *modification, are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *notice, this list of conditions and the following disclaimer in the
 *documentation and/or other materials provided with the distribution.
 *   3. Neither the name of Bouffalo Lab nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */
#ifndef __HARDWARE_KYS_H__
#define __HARDWARE_KYS_H__

/****************************************************************************
 * Pre-processor Definitions
****************************************************************************/

/* Register offsets *********************************************************/
#define KYS_KS_CTRL_OFFSET     (0x0)
#define KYS_KS_INT_EN_OFFSET   (0x10)
#define KYS_KS_INT_STS_OFFSET  (0x14)
#define KYS_KEYCODE_CLR_OFFSET (0x18)

/* 0x0 : ks_ctrl */
#define KYS_KS_EN_SHIFT    (0U)
#define KYS_KS_EN_MASK     (0x1 << KYS_KS_EN_SHIFT)
#define KYS_GHOST_EN_SHIFT (2U)
#define KYS_GHOST_EN_MASK  (0x1 << KYS_GHOST_EN_SHIFT)
#define KYS_DEG_EN_SHIFT   (3U)
#define KYS_DEG_EN_MASK    (0x1 << KYS_DEG_EN_SHIFT)
#define KYS_DEG_CNT_SHIFT  (4U)
#define KYS_DEG_CNT_MASK   (0xf << KYS_DEG_CNT_SHIFT)
#define KYS_RC_EXT_SHIFT   (8U)
#define KYS_RC_EXT_MASK    (0x3 << KYS_RC_EXT_SHIFT)
#define KYS_ROW_NUM_SHIFT  (16U)
#define KYS_ROW_NUM_MASK   (0x7 << KYS_ROW_NUM_SHIFT)

#endif /* __HARDWARE_KYS_H__ */
