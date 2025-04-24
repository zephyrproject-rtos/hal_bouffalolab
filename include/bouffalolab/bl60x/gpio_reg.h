/**
  ******************************************************************************
  * @file    gpio_reg.h
  * @version V1.0
  * @date    2022-08-03
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2020 Bouffalo Lab</center></h2>
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
  *
  ******************************************************************************
  */
#ifndef __HARDWARE_GPIO_H__
#define  __HARDWARE_GPIO_H__

/****************************************************************************
 * Pre-processor Definitions
****************************************************************************/

/* Register offsets *********************************************************/
#define GLB_GPIO_CFGCTL0_OFFSET                                 (0x100)/* GPIO_CFGCTL0 */
#define GLB_GPIO_CFGCTL1_OFFSET                                 (0x104)/* GPIO_CFGCTL1 */
#define GLB_GPIO_CFGCTL2_OFFSET                                 (0x108)/* GPIO_CFGCTL2 */
#define GLB_GPIO_CFGCTL3_OFFSET                                 (0x10C)/* GPIO_CFGCTL3 */
#define GLB_GPIO_CFGCTL4_OFFSET                                 (0x110)/* GPIO_CFGCTL4 */
#define GLB_GPIO_CFGCTL5_OFFSET                                 (0x114)/* GPIO_CFGCTL5 */
#define GLB_GPIO_CFGCTL6_OFFSET                                 (0x118)/* GPIO_CFGCTL6 */
#define GLB_GPIO_CFGCTL7_OFFSET                                 (0x11C)/* GPIO_CFGCTL7 */
#define GLB_GPIO_CFGCTL8_OFFSET                                 (0x120)/* GPIO_CFGCTL8 */
#define GLB_GPIO_CFGCTL9_OFFSET                                 (0x124)/* GPIO_CFGCTL9 */
#define GLB_GPIO_CFGCTL10_OFFSET                                (0x128)/* GPIO_CFGCTL10 */
#define GLB_GPIO_CFGCTL11_OFFSET                                (0x12C)/* GPIO_CFGCTL11 */
#define GLB_GPIO_CFGCTL12_OFFSET                                (0x130)/* GPIO_CFGCTL12 */
#define GLB_GPIO_CFGCTL13_OFFSET                                (0x134)/* GPIO_CFGCTL13 */
#define GLB_GPIO_CFGCTL14_OFFSET                                (0x138)/* GPIO_CFGCTL14 */
#define GLB_GPIO_CFGCTL15_OFFSET                                (0x13C)/* GPIO_CFGCTL15 */
#define GLB_GPIO_CFGCTL16_OFFSET                                (0x140)/* GPIO_CFGCTL16 */
#define GLB_GPIO_CFGCTL17_OFFSET                                (0x144)/* GPIO_CFGCTL17 */
#define GLB_GPIO_CFGCTL18_OFFSET                                (0x148)/* GPIO_CFGCTL18 */
#define GLB_GPIO_CFGCTL30_OFFSET                                (0x180)/* GPIO_CFGCTL30 */
#define GLB_GPIO_CFGCTL31_OFFSET                                (0x184)/* GPIO_CFGCTL31 */
#define GLB_GPIO_CFGCTL32_OFFSET                                (0x188)/* GPIO_CFGCTL32 */
#define GLB_GPIO_CFGCTL33_OFFSET                                (0x18C)/* GPIO_CFGCTL33 */
#define GLB_GPIO_CFGCTL34_OFFSET                                (0x190)/* GPIO_CFGCTL34 */
#define GLB_GPIO_CFGCTL35_OFFSET                                (0x194)/* GPIO_CFGCTL35 */
#define GLB_GPIO_CFGCTL36_OFFSET                                (0x198)/* GPIO_CFGCTL36 */
#define GLB_GPIO_INT_MASK1_OFFSET                               (0x1A0)/* GPIO_INT_MASK1 */
#define GLB_GPIO_INT_STAT1_OFFSET                               (0x1A8)/* GPIO_INT_STAT1 */
#define GLB_GPIO_INT_CLR1_OFFSET                                (0x1B0)/* GPIO_INT_CLR1 */
#define GLB_GPIO_INT_MODE_SET1_OFFSET                           (0x1C0)/* GPIO_INT_MODE_SET1 */
#define GLB_GPIO_INT_MODE_SET2_OFFSET                           (0x1C4)/* GPIO_INT_MODE_SET2 */
#define GLB_GPIO_INT_MODE_SET3_OFFSET                           (0x1C8)/* GPIO_INT_MODE_SET3 */
#define GLB_GPIO_INT_MODE_SET4_OFFSET                           (0x1CC)/* GPIO_INT_MODE_SET4 */
#define GLB_GPIO_INT2_MASK1_OFFSET                              (0x1D0)/* GPIO_INT2_MASK1 */
#define GLB_GPIO_INT2_STAT1_OFFSET                              (0x1D4)/* GPIO_INT2_STAT1 */
#define GLB_GPIO_INT2_CLR1_OFFSET                               (0x1D8)/* GPIO_INT2_CLR1 */
#define GLB_GPIO_INT2_MODE_SET1_OFFSET                          (0x1DC)/* GPIO_INT2_MODE_SET1 */
#define GLB_GPIO_INT2_MODE_SET2_OFFSET                          (0x1E0)/* GPIO_INT2_MODE_SET2 */
#define GLB_GPIO_INT2_MODE_SET3_OFFSET                          (0x1E4)/* GPIO_INT2_MODE_SET3 */
#define GLB_GPIO_INT2_MODE_SET4_OFFSET                          (0x1E8)/* GPIO_INT2_MODE_SET4 */

/* 0x100 : GPIO_CFGCTL0 */
#define GLB_REG_GPIO_0_IE                                       (1<<0U)
#define GLB_REG_GPIO_0_SMT                                      (1<<1U)
#define GLB_REG_GPIO_0_DRV_SHIFT                                (2U)
#define GLB_REG_GPIO_0_DRV_MASK                                 (0x3<<GLB_REG_GPIO_0_DRV_SHIFT)
#define GLB_REG_GPIO_0_PU                                       (1<<4U)
#define GLB_REG_GPIO_0_PD                                       (1<<5U)
#define GLB_REG_GPIO_0_FUNC_SEL_SHIFT                           (8U)
#define GLB_REG_GPIO_0_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_0_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_1_IE                                       (1<<16U)
#define GLB_REG_GPIO_1_SMT                                      (1<<17U)
#define GLB_REG_GPIO_1_DRV_SHIFT                                (18U)
#define GLB_REG_GPIO_1_DRV_MASK                                 (0x3<<GLB_REG_GPIO_1_DRV_SHIFT)
#define GLB_REG_GPIO_1_PU                                       (1<<20U)
#define GLB_REG_GPIO_1_PD                                       (1<<21U)
#define GLB_REG_GPIO_1_FUNC_SEL_SHIFT                           (24U)
#define GLB_REG_GPIO_1_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_1_FUNC_SEL_SHIFT)

/* 0x104 : GPIO_CFGCTL1 */
#define GLB_REG_GPIO_2_IE                                       (1<<0U)
#define GLB_REG_GPIO_2_SMT                                      (1<<1U)
#define GLB_REG_GPIO_2_DRV_SHIFT                                (2U)
#define GLB_REG_GPIO_2_DRV_MASK                                 (0x3<<GLB_REG_GPIO_2_DRV_SHIFT)
#define GLB_REG_GPIO_2_PU                                       (1<<4U)
#define GLB_REG_GPIO_2_PD                                       (1<<5U)
#define GLB_REG_GPIO_2_FUNC_SEL_SHIFT                           (8U)
#define GLB_REG_GPIO_2_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_2_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_3_IE                                       (1<<16U)
#define GLB_REG_GPIO_3_SMT                                      (1<<17U)
#define GLB_REG_GPIO_3_DRV_SHIFT                                (18U)
#define GLB_REG_GPIO_3_DRV_MASK                                 (0x3<<GLB_REG_GPIO_3_DRV_SHIFT)
#define GLB_REG_GPIO_3_PU                                       (1<<20U)
#define GLB_REG_GPIO_3_PD                                       (1<<21U)
#define GLB_REG_GPIO_3_FUNC_SEL_SHIFT                           (24U)
#define GLB_REG_GPIO_3_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_3_FUNC_SEL_SHIFT)

/* 0x108 : GPIO_CFGCTL2 */
#define GLB_REG_GPIO_4_IE                                       (1<<0U)
#define GLB_REG_GPIO_4_SMT                                      (1<<1U)
#define GLB_REG_GPIO_4_DRV_SHIFT                                (2U)
#define GLB_REG_GPIO_4_DRV_MASK                                 (0x3<<GLB_REG_GPIO_4_DRV_SHIFT)
#define GLB_REG_GPIO_4_PU                                       (1<<4U)
#define GLB_REG_GPIO_4_PD                                       (1<<5U)
#define GLB_REG_GPIO_4_FUNC_SEL_SHIFT                           (8U)
#define GLB_REG_GPIO_4_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_4_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_5_IE                                       (1<<16U)
#define GLB_REG_GPIO_5_SMT                                      (1<<17U)
#define GLB_REG_GPIO_5_DRV_SHIFT                                (18U)
#define GLB_REG_GPIO_5_DRV_MASK                                 (0x3<<GLB_REG_GPIO_5_DRV_SHIFT)
#define GLB_REG_GPIO_5_PU                                       (1<<20U)
#define GLB_REG_GPIO_5_PD                                       (1<<21U)
#define GLB_REG_GPIO_5_FUNC_SEL_SHIFT                           (24U)
#define GLB_REG_GPIO_5_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_5_FUNC_SEL_SHIFT)

/* 0x10C : GPIO_CFGCTL3 */
#define GLB_REG_GPIO_6_IE                                       (1<<0U)
#define GLB_REG_GPIO_6_SMT                                      (1<<1U)
#define GLB_REG_GPIO_6_DRV_SHIFT                                (2U)
#define GLB_REG_GPIO_6_DRV_MASK                                 (0x3<<GLB_REG_GPIO_6_DRV_SHIFT)
#define GLB_REG_GPIO_6_PU                                       (1<<4U)
#define GLB_REG_GPIO_6_PD                                       (1<<5U)
#define GLB_REG_GPIO_6_FUNC_SEL_SHIFT                           (8U)
#define GLB_REG_GPIO_6_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_6_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_7_IE                                       (1<<16U)
#define GLB_REG_GPIO_7_SMT                                      (1<<17U)
#define GLB_REG_GPIO_7_DRV_SHIFT                                (18U)
#define GLB_REG_GPIO_7_DRV_MASK                                 (0x3<<GLB_REG_GPIO_7_DRV_SHIFT)
#define GLB_REG_GPIO_7_PU                                       (1<<20U)
#define GLB_REG_GPIO_7_PD                                       (1<<21U)
#define GLB_REG_GPIO_7_FUNC_SEL_SHIFT                           (24U)
#define GLB_REG_GPIO_7_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_7_FUNC_SEL_SHIFT)

/* 0x110 : GPIO_CFGCTL4 */
#define GLB_REG_GPIO_8_IE                                       (1<<0U)
#define GLB_REG_GPIO_8_SMT                                      (1<<1U)
#define GLB_REG_GPIO_8_DRV_SHIFT                                (2U)
#define GLB_REG_GPIO_8_DRV_MASK                                 (0x3<<GLB_REG_GPIO_8_DRV_SHIFT)
#define GLB_REG_GPIO_8_PU                                       (1<<4U)
#define GLB_REG_GPIO_8_PD                                       (1<<5U)
#define GLB_REG_GPIO_8_FUNC_SEL_SHIFT                           (8U)
#define GLB_REG_GPIO_8_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_8_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_9_IE                                       (1<<16U)
#define GLB_REG_GPIO_9_SMT                                      (1<<17U)
#define GLB_REG_GPIO_9_DRV_SHIFT                                (18U)
#define GLB_REG_GPIO_9_DRV_MASK                                 (0x3<<GLB_REG_GPIO_9_DRV_SHIFT)
#define GLB_REG_GPIO_9_PU                                       (1<<20U)
#define GLB_REG_GPIO_9_PD                                       (1<<21U)
#define GLB_REG_GPIO_9_FUNC_SEL_SHIFT                           (24U)
#define GLB_REG_GPIO_9_FUNC_SEL_MASK                            (0x1f<<GLB_REG_GPIO_9_FUNC_SEL_SHIFT)

/* 0x114 : GPIO_CFGCTL5 */
#define GLB_REG_GPIO_10_IE                                      (1<<0U)
#define GLB_REG_GPIO_10_SMT                                     (1<<1U)
#define GLB_REG_GPIO_10_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_10_DRV_MASK                                (0x3<<GLB_REG_GPIO_10_DRV_SHIFT)
#define GLB_REG_GPIO_10_PU                                      (1<<4U)
#define GLB_REG_GPIO_10_PD                                      (1<<5U)
#define GLB_REG_GPIO_10_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_10_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_10_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_11_IE                                      (1<<16U)
#define GLB_REG_GPIO_11_SMT                                     (1<<17U)
#define GLB_REG_GPIO_11_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_11_DRV_MASK                                (0x3<<GLB_REG_GPIO_11_DRV_SHIFT)
#define GLB_REG_GPIO_11_PU                                      (1<<20U)
#define GLB_REG_GPIO_11_PD                                      (1<<21U)
#define GLB_REG_GPIO_11_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_11_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_11_FUNC_SEL_SHIFT)

/* 0x118 : GPIO_CFGCTL6 */
#define GLB_REG_GPIO_12_IE                                      (1<<0U)
#define GLB_REG_GPIO_12_SMT                                     (1<<1U)
#define GLB_REG_GPIO_12_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_12_DRV_MASK                                (0x3<<GLB_REG_GPIO_12_DRV_SHIFT)
#define GLB_REG_GPIO_12_PU                                      (1<<4U)
#define GLB_REG_GPIO_12_PD                                      (1<<5U)
#define GLB_REG_GPIO_12_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_12_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_12_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_13_IE                                      (1<<16U)
#define GLB_REG_GPIO_13_SMT                                     (1<<17U)
#define GLB_REG_GPIO_13_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_13_DRV_MASK                                (0x3<<GLB_REG_GPIO_13_DRV_SHIFT)
#define GLB_REG_GPIO_13_PU                                      (1<<20U)
#define GLB_REG_GPIO_13_PD                                      (1<<21U)
#define GLB_REG_GPIO_13_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_13_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_13_FUNC_SEL_SHIFT)

/* 0x11C : GPIO_CFGCTL7 */
#define GLB_REG_GPIO_14_IE                                      (1<<0U)
#define GLB_REG_GPIO_14_SMT                                     (1<<1U)
#define GLB_REG_GPIO_14_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_14_DRV_MASK                                (0x3<<GLB_REG_GPIO_14_DRV_SHIFT)
#define GLB_REG_GPIO_14_PU                                      (1<<4U)
#define GLB_REG_GPIO_14_PD                                      (1<<5U)
#define GLB_REG_GPIO_14_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_14_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_14_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_15_IE                                      (1<<16U)
#define GLB_REG_GPIO_15_SMT                                     (1<<17U)
#define GLB_REG_GPIO_15_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_15_DRV_MASK                                (0x3<<GLB_REG_GPIO_15_DRV_SHIFT)
#define GLB_REG_GPIO_15_PU                                      (1<<20U)
#define GLB_REG_GPIO_15_PD                                      (1<<21U)
#define GLB_REG_GPIO_15_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_15_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_15_FUNC_SEL_SHIFT)

/* 0x120 : GPIO_CFGCTL8 */
#define GLB_REG_GPIO_16_IE                                      (1<<0U)
#define GLB_REG_GPIO_16_SMT                                     (1<<1U)
#define GLB_REG_GPIO_16_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_16_DRV_MASK                                (0x3<<GLB_REG_GPIO_16_DRV_SHIFT)
#define GLB_REG_GPIO_16_PU                                      (1<<4U)
#define GLB_REG_GPIO_16_PD                                      (1<<5U)
#define GLB_REG_GPIO_16_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_16_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_16_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_17_IE                                      (1<<16U)
#define GLB_REG_GPIO_17_SMT                                     (1<<17U)
#define GLB_REG_GPIO_17_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_17_DRV_MASK                                (0x3<<GLB_REG_GPIO_17_DRV_SHIFT)
#define GLB_REG_GPIO_17_PU                                      (1<<20U)
#define GLB_REG_GPIO_17_PD                                      (1<<21U)
#define GLB_REG_GPIO_17_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_17_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_17_FUNC_SEL_SHIFT)

/* 0x124 : GPIO_CFGCTL9 */
#define GLB_REG_GPIO_18_IE                                      (1<<0U)
#define GLB_REG_GPIO_18_SMT                                     (1<<1U)
#define GLB_REG_GPIO_18_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_18_DRV_MASK                                (0x3<<GLB_REG_GPIO_18_DRV_SHIFT)
#define GLB_REG_GPIO_18_PU                                      (1<<4U)
#define GLB_REG_GPIO_18_PD                                      (1<<5U)
#define GLB_REG_GPIO_18_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_18_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_18_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_19_IE                                      (1<<16U)
#define GLB_REG_GPIO_19_SMT                                     (1<<17U)
#define GLB_REG_GPIO_19_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_19_DRV_MASK                                (0x3<<GLB_REG_GPIO_19_DRV_SHIFT)
#define GLB_REG_GPIO_19_PU                                      (1<<20U)
#define GLB_REG_GPIO_19_PD                                      (1<<21U)
#define GLB_REG_GPIO_19_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_19_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_19_FUNC_SEL_SHIFT)

/* 0x128 : GPIO_CFGCTL10 */
#define GLB_REG_GPIO_20_IE                                      (1<<0U)
#define GLB_REG_GPIO_20_SMT                                     (1<<1U)
#define GLB_REG_GPIO_20_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_20_DRV_MASK                                (0x3<<GLB_REG_GPIO_20_DRV_SHIFT)
#define GLB_REG_GPIO_20_PU                                      (1<<4U)
#define GLB_REG_GPIO_20_PD                                      (1<<5U)
#define GLB_REG_GPIO_20_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_20_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_20_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_21_IE                                      (1<<16U)
#define GLB_REG_GPIO_21_SMT                                     (1<<17U)
#define GLB_REG_GPIO_21_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_21_DRV_MASK                                (0x3<<GLB_REG_GPIO_21_DRV_SHIFT)
#define GLB_REG_GPIO_21_PU                                      (1<<20U)
#define GLB_REG_GPIO_21_PD                                      (1<<21U)
#define GLB_REG_GPIO_21_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_21_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_21_FUNC_SEL_SHIFT)

/* 0x12C : GPIO_CFGCTL11 */
#define GLB_REG_GPIO_22_IE                                      (1<<0U)
#define GLB_REG_GPIO_22_SMT                                     (1<<1U)
#define GLB_REG_GPIO_22_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_22_DRV_MASK                                (0x3<<GLB_REG_GPIO_22_DRV_SHIFT)
#define GLB_REG_GPIO_22_PU                                      (1<<4U)
#define GLB_REG_GPIO_22_PD                                      (1<<5U)
#define GLB_REG_GPIO_22_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_22_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_22_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_23_IE                                      (1<<16U)
#define GLB_REG_GPIO_23_SMT                                     (1<<17U)
#define GLB_REG_GPIO_23_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_23_DRV_MASK                                (0x3<<GLB_REG_GPIO_23_DRV_SHIFT)
#define GLB_REG_GPIO_23_PU                                      (1<<20U)
#define GLB_REG_GPIO_23_PD                                      (1<<21U)
#define GLB_REG_GPIO_23_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_23_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_23_FUNC_SEL_SHIFT)

/* 0x130 : GPIO_CFGCTL12 */
#define GLB_REG_GPIO_24_IE                                      (1<<0U)
#define GLB_REG_GPIO_24_SMT                                     (1<<1U)
#define GLB_REG_GPIO_24_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_24_DRV_MASK                                (0x3<<GLB_REG_GPIO_24_DRV_SHIFT)
#define GLB_REG_GPIO_24_PU                                      (1<<4U)
#define GLB_REG_GPIO_24_PD                                      (1<<5U)
#define GLB_REG_GPIO_24_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_24_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_24_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_25_IE                                      (1<<16U)
#define GLB_REG_GPIO_25_SMT                                     (1<<17U)
#define GLB_REG_GPIO_25_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_25_DRV_MASK                                (0x3<<GLB_REG_GPIO_25_DRV_SHIFT)
#define GLB_REG_GPIO_25_PU                                      (1<<20U)
#define GLB_REG_GPIO_25_PD                                      (1<<21U)
#define GLB_REG_GPIO_25_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_25_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_25_FUNC_SEL_SHIFT)

/* 0x134 : GPIO_CFGCTL13 */
#define GLB_REG_GPIO_26_IE                                      (1<<0U)
#define GLB_REG_GPIO_26_SMT                                     (1<<1U)
#define GLB_REG_GPIO_26_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_26_DRV_MASK                                (0x3<<GLB_REG_GPIO_26_DRV_SHIFT)
#define GLB_REG_GPIO_26_PU                                      (1<<4U)
#define GLB_REG_GPIO_26_PD                                      (1<<5U)
#define GLB_REG_GPIO_26_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_26_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_26_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_27_IE                                      (1<<16U)
#define GLB_REG_GPIO_27_SMT                                     (1<<17U)
#define GLB_REG_GPIO_27_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_27_DRV_MASK                                (0x3<<GLB_REG_GPIO_27_DRV_SHIFT)
#define GLB_REG_GPIO_27_PU                                      (1<<20U)
#define GLB_REG_GPIO_27_PD                                      (1<<21U)
#define GLB_REG_GPIO_27_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_27_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_27_FUNC_SEL_SHIFT)

/* 0x138 : GPIO_CFGCTL14 */
#define GLB_REG_GPIO_28_IE                                      (1<<0U)
#define GLB_REG_GPIO_28_SMT                                     (1<<1U)
#define GLB_REG_GPIO_28_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_28_DRV_MASK                                (0x3<<GLB_REG_GPIO_28_DRV_SHIFT)
#define GLB_REG_GPIO_28_PU                                      (1<<4U)
#define GLB_REG_GPIO_28_PD                                      (1<<5U)
#define GLB_REG_GPIO_28_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_28_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_28_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_29_IE                                      (1<<16U)
#define GLB_REG_GPIO_29_SMT                                     (1<<17U)
#define GLB_REG_GPIO_29_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_29_DRV_MASK                                (0x3<<GLB_REG_GPIO_29_DRV_SHIFT)
#define GLB_REG_GPIO_29_PU                                      (1<<20U)
#define GLB_REG_GPIO_29_PD                                      (1<<21U)
#define GLB_REG_GPIO_29_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_29_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_29_FUNC_SEL_SHIFT)

/* 0x13C : GPIO_CFGCTL15 */
#define GLB_REG_GPIO_30_IE                                      (1<<0U)
#define GLB_REG_GPIO_30_SMT                                     (1<<1U)
#define GLB_REG_GPIO_30_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_30_DRV_MASK                                (0x3<<GLB_REG_GPIO_30_DRV_SHIFT)
#define GLB_REG_GPIO_30_PU                                      (1<<4U)
#define GLB_REG_GPIO_30_PD                                      (1<<5U)
#define GLB_REG_GPIO_30_FUNC_SEL_SHIFT                          (8U)
#define GLB_REG_GPIO_30_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_30_FUNC_SEL_SHIFT)
#define GLB_REG_GPIO_31_IE                                      (1<<16U)
#define GLB_REG_GPIO_31_SMT                                     (1<<17U)
#define GLB_REG_GPIO_31_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_31_DRV_MASK                                (0x3<<GLB_REG_GPIO_31_DRV_SHIFT)
#define GLB_REG_GPIO_31_PU                                      (1<<20U)
#define GLB_REG_GPIO_31_PD                                      (1<<21U)
#define GLB_REG_GPIO_31_FUNC_SEL_SHIFT                          (24U)
#define GLB_REG_GPIO_31_FUNC_SEL_MASK                           (0x1f<<GLB_REG_GPIO_31_FUNC_SEL_SHIFT)

/* 0x140 : GPIO_CFGCTL16 */
#define GLB_REG_GPIO_32_IE                                      (1<<0U)
#define GLB_REG_GPIO_32_SMT                                     (1<<1U)
#define GLB_REG_GPIO_32_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_32_DRV_MASK                                (0x3<<GLB_REG_GPIO_32_DRV_SHIFT)
#define GLB_REG_GPIO_32_PU                                      (1<<4U)
#define GLB_REG_GPIO_32_PD                                      (1<<5U)
#define GLB_REG_GPIO_33_IE                                      (1<<16U)
#define GLB_REG_GPIO_33_SMT                                     (1<<17U)
#define GLB_REG_GPIO_33_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_33_DRV_MASK                                (0x3<<GLB_REG_GPIO_33_DRV_SHIFT)
#define GLB_REG_GPIO_33_PU                                      (1<<20U)
#define GLB_REG_GPIO_33_PD                                      (1<<21U)

/* 0x144 : GPIO_CFGCTL17 */
#define GLB_REG_GPIO_34_IE                                      (1<<0U)
#define GLB_REG_GPIO_34_SMT                                     (1<<1U)
#define GLB_REG_GPIO_34_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_34_DRV_MASK                                (0x3<<GLB_REG_GPIO_34_DRV_SHIFT)
#define GLB_REG_GPIO_34_PU                                      (1<<4U)
#define GLB_REG_GPIO_34_PD                                      (1<<5U)
#define GLB_REG_GPIO_35_IE                                      (1<<16U)
#define GLB_REG_GPIO_35_SMT                                     (1<<17U)
#define GLB_REG_GPIO_35_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_35_DRV_MASK                                (0x3<<GLB_REG_GPIO_35_DRV_SHIFT)
#define GLB_REG_GPIO_35_PU                                      (1<<20U)
#define GLB_REG_GPIO_35_PD                                      (1<<21U)

/* 0x148 : GPIO_CFGCTL18 */
#define GLB_REG_GPIO_36_IE                                      (1<<0U)
#define GLB_REG_GPIO_36_SMT                                     (1<<1U)
#define GLB_REG_GPIO_36_DRV_SHIFT                               (2U)
#define GLB_REG_GPIO_36_DRV_MASK                                (0x3<<GLB_REG_GPIO_36_DRV_SHIFT)
#define GLB_REG_GPIO_36_PU                                      (1<<4U)
#define GLB_REG_GPIO_36_PD                                      (1<<5U)
#define GLB_REG_GPIO_37_IE                                      (1<<16U)
#define GLB_REG_GPIO_37_SMT                                     (1<<17U)
#define GLB_REG_GPIO_37_DRV_SHIFT                               (18U)
#define GLB_REG_GPIO_37_DRV_MASK                                (0x3<<GLB_REG_GPIO_37_DRV_SHIFT)
#define GLB_REG_GPIO_37_PU                                      (1<<20U)
#define GLB_REG_GPIO_37_PD                                      (1<<21U)

/* 0x180 : GPIO_CFGCTL30 */
#define GLB_REG_GPIO_0_I                                        (1<<0U)
#define GLB_REG_GPIO_1_I                                        (1<<1U)
#define GLB_REG_GPIO_2_I                                        (1<<2U)
#define GLB_REG_GPIO_3_I                                        (1<<3U)
#define GLB_REG_GPIO_4_I                                        (1<<4U)
#define GLB_REG_GPIO_5_I                                        (1<<5U)
#define GLB_REG_GPIO_6_I                                        (1<<6U)
#define GLB_REG_GPIO_7_I                                        (1<<7U)
#define GLB_REG_GPIO_8_I                                        (1<<8U)
#define GLB_REG_GPIO_9_I                                        (1<<9U)
#define GLB_REG_GPIO_10_I                                       (1<<10U)
#define GLB_REG_GPIO_11_I                                       (1<<11U)
#define GLB_REG_GPIO_12_I                                       (1<<12U)
#define GLB_REG_GPIO_13_I                                       (1<<13U)
#define GLB_REG_GPIO_14_I                                       (1<<14U)
#define GLB_REG_GPIO_15_I                                       (1<<15U)
#define GLB_REG_GPIO_16_I                                       (1<<16U)
#define GLB_REG_GPIO_17_I                                       (1<<17U)
#define GLB_REG_GPIO_18_I                                       (1<<18U)
#define GLB_REG_GPIO_19_I                                       (1<<19U)
#define GLB_REG_GPIO_20_I                                       (1<<20U)
#define GLB_REG_GPIO_21_I                                       (1<<21U)
#define GLB_REG_GPIO_22_I                                       (1<<22U)
#define GLB_REG_GPIO_23_I                                       (1<<23U)
#define GLB_REG_GPIO_24_I                                       (1<<24U)
#define GLB_REG_GPIO_25_I                                       (1<<25U)
#define GLB_REG_GPIO_26_I                                       (1<<26U)
#define GLB_REG_GPIO_27_I                                       (1<<27U)
#define GLB_REG_GPIO_28_I                                       (1<<28U)
#define GLB_REG_GPIO_29_I                                       (1<<29U)
#define GLB_REG_GPIO_30_I                                       (1<<30U)
#define GLB_REG_GPIO_31_I                                       (1<<31U)

/* 0x184 : GPIO_CFGCTL31 */

/* 0x188 : GPIO_CFGCTL32 */
#define GLB_REG_GPIO_0_O                                        (1<<0U)
#define GLB_REG_GPIO_1_O                                        (1<<1U)
#define GLB_REG_GPIO_2_O                                        (1<<2U)
#define GLB_REG_GPIO_3_O                                        (1<<3U)
#define GLB_REG_GPIO_4_O                                        (1<<4U)
#define GLB_REG_GPIO_5_O                                        (1<<5U)
#define GLB_REG_GPIO_6_O                                        (1<<6U)
#define GLB_REG_GPIO_7_O                                        (1<<7U)
#define GLB_REG_GPIO_8_O                                        (1<<8U)
#define GLB_REG_GPIO_9_O                                        (1<<9U)
#define GLB_REG_GPIO_10_O                                       (1<<10U)
#define GLB_REG_GPIO_11_O                                       (1<<11U)
#define GLB_REG_GPIO_12_O                                       (1<<12U)
#define GLB_REG_GPIO_13_O                                       (1<<13U)
#define GLB_REG_GPIO_14_O                                       (1<<14U)
#define GLB_REG_GPIO_15_O                                       (1<<15U)
#define GLB_REG_GPIO_16_O                                       (1<<16U)
#define GLB_REG_GPIO_17_O                                       (1<<17U)
#define GLB_REG_GPIO_18_O                                       (1<<18U)
#define GLB_REG_GPIO_19_O                                       (1<<19U)
#define GLB_REG_GPIO_20_O                                       (1<<20U)
#define GLB_REG_GPIO_21_O                                       (1<<21U)
#define GLB_REG_GPIO_22_O                                       (1<<22U)
#define GLB_REG_GPIO_23_O                                       (1<<23U)
#define GLB_REG_GPIO_24_O                                       (1<<24U)
#define GLB_REG_GPIO_25_O                                       (1<<25U)
#define GLB_REG_GPIO_26_O                                       (1<<26U)
#define GLB_REG_GPIO_27_O                                       (1<<27U)
#define GLB_REG_GPIO_28_O                                       (1<<28U)
#define GLB_REG_GPIO_29_O                                       (1<<29U)
#define GLB_REG_GPIO_30_O                                       (1<<30U)
#define GLB_REG_GPIO_31_O                                       (1<<31U)

/* 0x18C : GPIO_CFGCTL33 */

/* 0x190 : GPIO_CFGCTL34 */
#define GLB_REG_GPIO_0_OE                                       (1<<0U)
#define GLB_REG_GPIO_1_OE                                       (1<<1U)
#define GLB_REG_GPIO_2_OE                                       (1<<2U)
#define GLB_REG_GPIO_3_OE                                       (1<<3U)
#define GLB_REG_GPIO_4_OE                                       (1<<4U)
#define GLB_REG_GPIO_5_OE                                       (1<<5U)
#define GLB_REG_GPIO_6_OE                                       (1<<6U)
#define GLB_REG_GPIO_7_OE                                       (1<<7U)
#define GLB_REG_GPIO_8_OE                                       (1<<8U)
#define GLB_REG_GPIO_9_OE                                       (1<<9U)
#define GLB_REG_GPIO_10_OE                                      (1<<10U)
#define GLB_REG_GPIO_11_OE                                      (1<<11U)
#define GLB_REG_GPIO_12_OE                                      (1<<12U)
#define GLB_REG_GPIO_13_OE                                      (1<<13U)
#define GLB_REG_GPIO_14_OE                                      (1<<14U)
#define GLB_REG_GPIO_15_OE                                      (1<<15U)
#define GLB_REG_GPIO_16_OE                                      (1<<16U)
#define GLB_REG_GPIO_17_OE                                      (1<<17U)
#define GLB_REG_GPIO_18_OE                                      (1<<18U)
#define GLB_REG_GPIO_19_OE                                      (1<<19U)
#define GLB_REG_GPIO_20_OE                                      (1<<20U)
#define GLB_REG_GPIO_21_OE                                      (1<<21U)
#define GLB_REG_GPIO_22_OE                                      (1<<22U)
#define GLB_REG_GPIO_23_OE                                      (1<<23U)
#define GLB_REG_GPIO_24_OE                                      (1<<24U)
#define GLB_REG_GPIO_25_OE                                      (1<<25U)
#define GLB_REG_GPIO_26_OE                                      (1<<26U)
#define GLB_REG_GPIO_27_OE                                      (1<<27U)
#define GLB_REG_GPIO_28_OE                                      (1<<28U)
#define GLB_REG_GPIO_29_OE                                      (1<<29U)
#define GLB_REG_GPIO_30_OE                                      (1<<30U)
#define GLB_REG_GPIO_31_OE                                      (1<<31U)

/* 0x194 : GPIO_CFGCTL35 */

/* 0x1A0 : GPIO_INT_MASK1 */
#define GLB_REG_GPIO_INT_MASK1_SHIFT                            (0U)
#define GLB_REG_GPIO_INT_MASK1_MASK                             (0xffffffff<<GLB_REG_GPIO_INT_MASK1_SHIFT)

/* 0x1A8 : GPIO_INT_STAT1 */
#define GLB_GPIO_INT_STAT1_SHIFT                                (0U)
#define GLB_GPIO_INT_STAT1_MASK                                 (0xffffffff<<GLB_GPIO_INT_STAT1_SHIFT)

/* 0x1B0 : GPIO_INT_CLR1 */
#define GLB_REG_GPIO_INT_CLR1_SHIFT                             (0U)
#define GLB_REG_GPIO_INT_CLR1_MASK                              (0xffffffff<<GLB_REG_GPIO_INT_CLR1_SHIFT)

/* 0x1C0 : GPIO_INT_MODE_SET1 */
#define GLB_REG_GPIO_INT_MODE_SET1_SHIFT                        (0U)
#define GLB_REG_GPIO_INT_MODE_SET1_MASK                         (0x3fffffff<<GLB_REG_GPIO_INT_MODE_SET1_SHIFT)

/* 0x1C4 : GPIO_INT_MODE_SET2 */
#define GLB_REG_GPIO_INT_MODE_SET2_SHIFT                        (0U)
#define GLB_REG_GPIO_INT_MODE_SET2_MASK                         (0x3fffffff<<GLB_REG_GPIO_INT_MODE_SET2_SHIFT)

/* 0x1C8 : GPIO_INT_MODE_SET3 */
#define GLB_REG_GPIO_INT_MODE_SET3_SHIFT                        (0U)
#define GLB_REG_GPIO_INT_MODE_SET3_MASK                         (0x3fffffff<<GLB_REG_GPIO_INT_MODE_SET3_SHIFT)

/* 0x1CC : GPIO_INT_MODE_SET4 */
#define GLB_REG_GPIO_INT_MODE_SET4_SHIFT                        (0U)
#define GLB_REG_GPIO_INT_MODE_SET4_MASK                         (0x3f<<GLB_REG_GPIO_INT_MODE_SET4_SHIFT)

/* 0x1D0 : GPIO_INT2_MASK1 */
#define GLB_REG_GPIO_INT2_MASK1_SHIFT                           (0U)
#define GLB_REG_GPIO_INT2_MASK1_MASK                            (0xffffffff<<GLB_REG_GPIO_INT2_MASK1_SHIFT)

/* 0x1D4 : GPIO_INT2_STAT1 */
#define GLB_GPIO_INT2_STAT1_SHIFT                               (0U)
#define GLB_GPIO_INT2_STAT1_MASK                                (0xffffffff<<GLB_GPIO_INT2_STAT1_SHIFT)

/* 0x1D8 : GPIO_INT2_CLR1 */
#define GLB_REG_GPIO_INT2_CLR1_SHIFT                            (0U)
#define GLB_REG_GPIO_INT2_CLR1_MASK                             (0xffffffff<<GLB_REG_GPIO_INT2_CLR1_SHIFT)

/* 0x1DC : GPIO_INT2_MODE_SET1 */
#define GLB_REG_GPIO_INT2_MODE_SET1_SHIFT                       (0U)
#define GLB_REG_GPIO_INT2_MODE_SET1_MASK                        (0x3fffffff<<GLB_REG_GPIO_INT2_MODE_SET1_SHIFT)

/* 0x1E0 : GPIO_INT2_MODE_SET2 */
#define GLB_REG_GPIO_INT2_MODE_SET2_SHIFT                       (0U)
#define GLB_REG_GPIO_INT2_MODE_SET2_MASK                        (0x3fffffff<<GLB_REG_GPIO_INT2_MODE_SET2_SHIFT)

/* 0x1E4 : GPIO_INT2_MODE_SET3 */
#define GLB_REG_GPIO_INT2_MODE_SET3_SHIFT                       (0U)
#define GLB_REG_GPIO_INT2_MODE_SET3_MASK                        (0x3fffffff<<GLB_REG_GPIO_INT2_MODE_SET3_SHIFT)

/* 0x1E8 : GPIO_INT2_MODE_SET4 */
#define GLB_REG_GPIO_INT2_MODE_SET4_SHIFT                       (0U)
#define GLB_REG_GPIO_INT2_MODE_SET4_MASK                        (0x3f<<GLB_REG_GPIO_INT2_MODE_SET4_SHIFT)

#endif




/* __HARDWARE_GPIO_H__ */
