/*
 * Copyright (c) 2016-2022 Bouffalolab.
 *
 * This file is part of
 *     *** Bouffalolab Software Dev Kit ***
 *      (see www.bouffalolab.com).
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of Bouffalo Lab nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __LMAC154_FPT_H__
#define __LMAC154_FPT_H__


typedef enum {
    LMAC154_FPT_DATAREQ             = 0,
    LMAC154_FPT_DATAREQ_DATA        = 1,
    LMAC154_FPT_ANY                 = 2
} lmac154_fptMode_t;

typedef enum {
    LMAC154_FPT_RESULT_NONE         = 0,
    LMAC154_FPT_RESULT_FALSE        = 1,
    LMAC154_FPT_RESULT_TRUE         = 2,
    LMAC154_FPT_RESULT_BUSY         = 3
} lmac154_fptResult_t;

void lmac154_setFramePendingSourceMatch(bool isEnable);

/****************************************************************************//**
 * @brief  Set frame pending table mode
 *
 * @param  mode:
 *
 * @return None
 *
*******************************************************************************/
void lmac154_setFramePendingMode(lmac154_fptMode_t mode);

/****************************************************************************//**
 * @brief  Get frame pending table mode
 *
 * @param  None
 *
 * @return lmac154_fptMode_t
 *
*******************************************************************************/
lmac154_fptMode_t lmac154_getFramePendingMode(void);

/****************************************************************************//**
 * @brief  Get frame pending table result when receive a packet
 *
 * @param  tout: timeout to do frame pending table search
 *
 * @param  isFramePended: whether frame pending is set for searched on received packet
 *
 * @return int: return the index of neighbor table if matched; else, return -1
 *
*******************************************************************************/
int lmac154_framePendingResult(uint32_t tout, bool * isFramePended);

/****************************************************************************//**
 * @brief  Set frame pending bit result if neighbor search fails
 *
 * @param  bFramePending, frame pending bit, true by default.
 *
 * @return None
 *
*******************************************************************************/
void lmac154_setFramePendingBitIfNeighborSearchFails(bool bFramePending);

/****************************************************************************//**
 * @brief  Get frame pending bit result if neighbor search fails
 *
 * @param  None
 *
 * @return True, if neighbor search fails.
 *
*******************************************************************************/
bool lmac154_getFramePendingBitIfNeighborSearchFails(void);

#endif
