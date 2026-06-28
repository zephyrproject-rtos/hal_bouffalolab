/*
 * Contains definitions removed from 'common' files with ifdefs
 * Copyright (c) 2026 Bouffalo lab
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

/* dac_reg.h */
#define GPIP_GPDAC_DMA_INV_MSB (1 << 1U)
#define GLB_GPDAC_B_DATA_SHIFT (0U)
#define GLB_GPDAC_B_DATA_MASK  (0x1fff << GLB_GPDAC_B_DATA_SHIFT)
#define GLB_GPDAC_A_DATA_SHIFT (16U)
#define GLB_GPDAC_A_DATA_MASK  (0x1fff << GLB_GPDAC_A_DATA_SHIFT)

/* dma_reg.h */
#define DMA_SBSIZE_MASK        (0x3 << DMA_SBSIZE_SHIFT)
#define DMA_DST_MIN_MODE       (1 << 14U)
#define DMA_DBSIZE_MASK        (0x3 << DMA_DBSIZE_SHIFT)
#define DMA_DST_ADD_MODE       (1 << 17U)
#define DMA_SWIDTH_MASK        (0x3 << DMA_SWIDTH_SHIFT)
#define DMA_DWIDTH_MASK        (0x3 << DMA_DWIDTH_SHIFT)
#define DMA_FIX_CNT_SHIFT      (23U)
#define DMA_FIX_CNT_MASK       (0x7 << DMA_FIX_CNT_SHIFT)
#define DMA_SOFTBREQ_0_OFFSET        (0x20) /* DMA_SoftBReq_0 */
#define DMA_SOFTBREQ_1_OFFSET        (0x24) /* DMA_SoftBReq_1 */
#define DMA_SOFTSREQ_0_OFFSET        (0x28) /* DMA_SoftSReq_0 */
#define DMA_SOFTSREQ_1_OFFSET        (0x2C) /* DMA_SoftSReq_1 */
#define DMA_SOFTLBREQ_0_OFFSET       (0x30) /* DMA_SoftLBReq_0 */
#define DMA_SOFTLBREQ_1_OFFSET       (0x34) /* DMA_SoftLBReq_1 */
#define DMA_SOFTLSREQ_0_OFFSET       (0x38) /* DMA_SoftLSReq_0 */
#define DMA_SOFTLSREQ_1_OFFSET       (0x3C) /* DMA_SoftLSReq_1 */
#define DMA_TOP_CONFIG_OFFSET        (0x40) /* DMA_Top_Config */
#define DMA_SYNC_0_OFFSET            (0x44) /* DMA_Sync_0 */
#define DMA_SYNC_1_OFFSET            (0x48) /* DMA_Sync_1 */
#define DMA_HW_VERSION_OFFSET        (0xFC) /* DMA_HW_Version */
#define DMA_SW_USAGE_OFFSET          (0xFC) /* DMA_SW_Usage */
/* 0x20 : DMA_SoftBReq */
#define DMA_SOFTBREQ_0_SHIFT (0U)
#define DMA_SOFTBREQ_0_MASK  (0xffffffff << DMA_SOFTBREQ_0_SHIFT)

/* 0x24 : DMA_SoftBReq */
#define DMA_SOFTBREQ_1_SHIFT (0U)
#define DMA_SOFTBREQ_1_MASK  (0xffffffff << DMA_SOFTBREQ_1_SHIFT)

/* 0x28 : DMA_SoftSReq */
#define DMA_SOFTSREQ_0_SHIFT (0U)
#define DMA_SOFTSREQ_0_MASK  (0xffffffff << DMA_SOFTSREQ_0_SHIFT)

/* 0x2C : DMA_SoftSReq */
#define DMA_SOFTSREQ_1_SHIFT (0U)
#define DMA_SOFTSREQ_1_MASK  (0xffffffff << DMA_SOFTSREQ_1_SHIFT)

/* 0x30 : DMA_SoftLBReq */
#define DMA_SOFTLBREQ_0_SHIFT (0U)
#define DMA_SOFTLBREQ_0_MASK  (0xffffffff << DMA_SOFTLBREQ_0_SHIFT)

/* 0x34 : DMA_SoftLBReq */
#define DMA_SOFTLBREQ_1_SHIFT (0U)
#define DMA_SOFTLBREQ_1_MASK  (0xffffffff << DMA_SOFTLBREQ_1_SHIFT)

/* 0x38 : DMA_SoftLSReq */
#define DMA_SOFTLSREQ_0_SHIFT (0U)
#define DMA_SOFTLSREQ_0_MASK  (0xffffffff << DMA_SOFTLSREQ_0_SHIFT)

/* 0x3C : DMA_SoftLSReq */
#define DMA_SOFTLSREQ_1_SHIFT (0U)
#define DMA_SOFTLSREQ_1_MASK  (0xffffffff << DMA_SOFTLSREQ_1_SHIFT)

/* 0x40 : DMA_Top_Config */
#define DMA_E (1 << 0U)
#define DMA_M (1 << 1U)

/* 0x44 : DMA_Sync0 */
#define DMA_SYNC0_SHIFT (0U)
#define DMA_SYNC0_MASK  (0xffffffff << DMA_SYNC_SHIFT)

/* 0x48 : DMA_Sync1 */
#define DMA_SYNC1_SHIFT (0U)
#define DMA_SYNC1_MASK  (0xffffffff << DMA_SYNC_SHIFT)

/* 0xFC : DMA_Version */
#define DMA_SW_USAGE_SHIFT   (0U)
#define DMA_SW_USAGE_MASK    (0xffffff << DMA_SW_USAGE_SHIFT)
#define DMA_HW_VERSION_SHIFT (24U)
#define DMA_HW_VERSION_MASK  (0xff << DMA_HW_VERSION_SHIFT)
#define DMA_LLI_VALID          (1 << 20U)

#define DMA_SRCPERIPHERAL_SHIFT (1U)
#define DMA_SRCPERIPHERAL_MASK  (0x3f << DMA_SRCPERIPHERAL_SHIFT)
#define DMA_DSTPERIPHERAL_SHIFT (7U)
#define DMA_DSTPERIPHERAL_MASK  (0x3f << DMA_DSTPERIPHERAL_SHIFT)
#define DMA_FLOWCNTRL_SHIFT     (13U)
#define DMA_FLOWCNTRL_MASK      (0x7 << DMA_FLOWCNTRL_SHIFT)
#define DMA_IE                  (1 << 16U)
#define DMA_ITC                 (1 << 17U)
#define DMA_L                   (1 << 18U)
#define DMA_A                   (1 << 19U)
#define DMA_H                   (1 << 20U)
#define DMA_LLI_MUTEX           (1 << 21U)
#define DMA_LLICOUNTER_SHIFT    (22U)
#define DMA_LLICOUNTER_MASK     (0x3ff << DMA_LLICOUNTER_SHIFT)

/* spi_reg.h */
#define SPI_BACKUP_IO_EN_OFFSET (0xFC) /* backup_io_en */
#define SPI_TX_FIFO_CNT_MASK (0x3f << SPI_TX_FIFO_CNT_SHIFT)
#define SPI_RX_FIFO_CNT_MASK (0x3f << SPI_RX_FIFO_CNT_SHIFT)
#define SPI_TX_FIFO_TH_MASK (0x1f << SPI_TX_FIFO_TH_SHIFT)
#define SPI_RX_FIFO_TH_MASK (0x1f << SPI_RX_FIFO_TH_SHIFT)
#define SPI_SW_USAGE_OFFSET      (0xF8)/* spi_sw_usage */
#define SPI_HW_VERSION_OFFSET    (0xF8)/* spi_hw_version */
#define SPI_CR_SPI_S_TRANS_DATA_EDGE_SEL (1 << 31U)
#define SPI_CR_SPI_RXD_IGNR_P_MASK  (0xffff << SPI_CR_SPI_RXD_IGNR_P_SHIFT)
#define SPI_CR_SPI_RXD_IGNR_S_MASK  (0xffff << SPI_CR_SPI_RXD_IGNR_S_SHIFT)
/* 0xF8 : spi_sw_usage and spi_hw_version */
#define SPI_SW_USAGE_SHIFT   (0U)
#define SPI_SW_USAGE_MASK    (0xffffff << SPI_SW_USAGE_SHIFT)
#define SPI_HW_VERSION_SHIFT (24U)
#define SPI_HW_VERSION_MASK  (0xff << SPI_HW_VERSION_SHIFT)

/* uart_reg.h */
#define UART_SW_MODE_OFFSET (0x1C) /* uart_sw_mode */
#define UART_CR_UTX_LIN_EN (1 << 3U)
#define UART_CR_UTX_IR_EN  (1 << 6U)
#define UART_CR_UTX_IR_INV (1 << 7U)
#define UART_CR_UTX_BIT_CNT_P_SHIFT (11U)
#define UART_CR_UTX_BIT_CNT_B_SHIFT (13U)
#define UART_CR_UTX_BIT_CNT_B_MASK  (0x7 << UART_CR_UTX_BIT_CNT_B_SHIFT)
#define UART_CR_URX_ABR_EN (1 << 1U)
#define UART_CR_URX_LIN_EN (1 << 3U)
#define UART_CR_URX_IR_EN  (1 << 6U)
#define UART_CR_URX_IR_INV (1 << 7U)
/* 0x10 : utx_ir_position */
#define UART_CR_UTX_IR_POS_S_SHIFT (0U)
#define UART_CR_UTX_IR_POS_S_MASK  (0xffff << UART_CR_UTX_IR_POS_S_SHIFT)
#define UART_CR_UTX_IR_POS_P_SHIFT (16U)
#define UART_CR_UTX_IR_POS_P_MASK  (0xffff << UART_CR_UTX_IR_POS_P_SHIFT)
#define UART_HW_VERSION_OFFSET (0x90) /* uart_hw_version */
#define UART_SW_USAGE_OFFSET   (0x90) /* uart_sw_usage */
#define UART_CR_URX_DEG_EN        (1 << 7U)
#define UART_CR_URX_DEG_CNT_SHIFT (8U)
#define UART_CR_URX_DEG_CNT_MASK  (0xff << UART_CR_URX_DEG_CNT_SHIFT)

/* 0x14 : urx_ir_position */
#define UART_CR_URX_IR_POS_S_SHIFT (0U)
#define UART_CR_URX_IR_POS_S_MASK  (0xffff << UART_CR_URX_IR_POS_S_SHIFT)
/* 0x1C : uart_sw_mode */
#define UART_CR_UTX_TXD_SW_MODE (1 << 0U)
#define UART_CR_UTX_TXD_SW_VAL  (1 << 1U)
#define UART_CR_URX_RTS_SW_MODE (1 << 2U)
#define UART_CR_URX_RTS_SW_VAL  (1 << 3U)
#define UART_URX_LSE_INT (1 << 8U)
#define UART_URX_BCR_INT (1 << 9U)
#define UART_URX_ADS_INT (1 << 10U)
#define UART_URX_AD5_INT (1 << 11U)
#define UART_CR_URX_LSE_MASK (1 << 8U)
#define UART_CR_URX_BCR_MASK (1 << 9U)
#define UART_CR_URX_ADS_MASK (1 << 10U)
#define UART_CR_URX_AD5_MASK (1 << 11U)
#define UART_CR_URX_LSE_CLR (1 << 8U)
#define UART_CR_URX_BCR_CLR (1 << 9U)
#define UART_CR_URX_ADS_CLR (1 << 10U)
#define UART_CR_URX_AD5_CLR (1 << 11U)
#define UART_CR_URX_LSE_EN (1 << 8U)
#define UART_CR_URX_BCR_EN (1 << 9U)
#define UART_CR_URX_ADS_EN (1 << 10U)
#define UART_CR_URX_AD5_EN (1 << 11U)
#define UART_STS_URX_ABR_PRD_0X55_MASK (0xffff << UART_STS_URX_ABR_PRD_0X55_SHIFT)
/* 0x38 : urx_abr_prd_b01 */
#define UART_STS_URX_ABR_PRD_BIT0_SHIFT (0U)
#define UART_STS_URX_ABR_PRD_BIT0_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT0_SHIFT)
#define UART_STS_URX_ABR_PRD_BIT1_SHIFT (16U)
#define UART_STS_URX_ABR_PRD_BIT1_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT1_SHIFT)
/* 0x3C : urx_abr_prd_b23 */
#define UART_STS_URX_ABR_PRD_BIT2_SHIFT (0U)
#define UART_STS_URX_ABR_PRD_BIT2_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT2_SHIFT)
#define UART_STS_URX_ABR_PRD_BIT3_SHIFT (16U)
#define UART_STS_URX_ABR_PRD_BIT3_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT3_SHIFT)

/* 0x40 : urx_abr_prd_b45 */
#define UART_STS_URX_ABR_PRD_BIT4_SHIFT (0U)
#define UART_STS_URX_ABR_PRD_BIT4_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT4_SHIFT)
#define UART_STS_URX_ABR_PRD_BIT5_SHIFT (16U)
#define UART_STS_URX_ABR_PRD_BIT5_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT5_SHIFT)

/* 0x44 : urx_abr_prd_b67 */
#define UART_STS_URX_ABR_PRD_BIT6_SHIFT (0U)
#define UART_STS_URX_ABR_PRD_BIT6_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT6_SHIFT)
#define UART_STS_URX_ABR_PRD_BIT7_SHIFT (16U)
#define UART_STS_URX_ABR_PRD_BIT7_MASK (0xffff << UART_STS_URX_ABR_PRD_BIT7_SHIFT)

/* 0x48 : urx_abr_pw_tol */
#define UART_CR_URX_ABR_PW_TOL_SHIFT (0U)
#define UART_CR_URX_ABR_PW_TOL_MASK  (0xff << UART_CR_URX_ABR_PW_TOL_SHIFT)

/* 0x50 : urx_bcr_int_cfg */
#define UART_CR_URX_BCR_VALUE_SHIFT  (0U)
#define UART_CR_URX_BCR_VALUE_MASK   (0xffff << UART_CR_URX_BCR_VALUE_SHIFT)
#define UART_STS_URX_BCR_COUNT_SHIFT (16U)
#define UART_STS_URX_BCR_COUNT_MASK  (0xffff << UART_STS_URX_BCR_COUNT_SHIFT)

/* 0x54 : utx_rs485_cfg */
#define UART_CR_UTX_RS485_EN  (1 << 0U)
#define UART_CR_UTX_RS485_POL (1 << 1U)

#define UART_TX_FIFO_CNT_MASK (0x3f << UART_TX_FIFO_CNT_SHIFT)
#define UART_RX_FIFO_CNT_MASK (0x3f << UART_RX_FIFO_CNT_SHIFT)
#define UART_TX_FIFO_TH_MASK (0x1f << UART_TX_FIFO_TH_SHIFT)
#define UART_RX_FIFO_TH_MASK (0x1f << UART_RX_FIFO_TH_SHIFT)

/* timer_reg.h */
#define TIMER_CS_0_SHIFT   (0U)
#define TIMER_CS_0_MASK    (0xf << TIMER_CS_0_SHIFT)
#define TIMER_CS_1_SHIFT   (4U)
#define TIMER_CS_1_MASK    (0xf << TIMER_CS_1_SHIFT)
#define TIMER_CS_WDT_SHIFT (8U)
#define TIMER_CS_WDT_MASK  (0xf << TIMER_CS_WDT_SHIFT)
#define TIMER_ID_SHIFT     (24U)
#define TIMER_ID_MASK      (0xff << TIMER_ID_SHIFT)
#define TIMER_GPIO_LAT3_OFFSET  (0xD0) /* GPIO Latch Value3 */
#define TIMER_GPIO_LAT4_OFFSET  (0xD4) /* GPIO Latch Value4 */
#define TIMER_HW_VERSION_OFFSET (0xF0) /* Timer Hardware Version */
#define TIMER_SW_USAGE_OFFSET   (0xF0) /* Timer Software Usage */
#define TIMER_GPIO_LAT_IRQ_EN   (1 << 3U)
#define TIMER0_DMA_REQ_EN_SHIFT (4U)
#define TIMER0_DMA_REQ_EN_MASK  (0x7 << TIMER0_DMA_REQ_EN_SHIFT)
#define TIMER1_DMA_REQ_EN_SHIFT (4U)
#define TIMER1_DMA_REQ_EN_MASK  (0x7 << TIMER0_DMA_REQ_EN_SHIFT)
#define TIMER_GPIO_LAT_IRQ_CLR (1 << 3U)
#define TIMER_GPIO_LAT_DET_MODE (1 << 8U)
/* 0xD0 : GPIO Latch Value3 */
#define TIMER_GPIO_LAT3_SHIFT (0U)
#define TIMER_GPIO_LAT3_MASK  (0xffffffff << TIMER_GPIO_LAT3_SHIFT)

/* 0xD4 : GPIO Latch Value4 */
#define TIMER_GPIO_LAT4_SHIFT (0U)
#define TIMER_GPIO_LAT4_MASK  (0xffffffff << TIMER_GPIO_LAT4_SHIFT)

/* 0xF0 : Timer Version */
#define TIMER_SW_USAGE_SHIFT   (0U)
#define TIMER_SW_USAGE_MASK    (0xffffff << TIMER_SW_USAGE_SHIFT)
#define TIMER_HW_VERSION_SHIFT (24U)
#define TIMER_HW_VERSION_MASK  (0xff << TIMER_HW_VERSION_SHIFT)

/* kys_reg.h */
#define KYS_KEYFIFO_IDX_OFFSET   (0x30)
#define KYS_KEYFIFO_VALUE_OFFSET (0x34)
#define KYS_FIFO_MODE_SHIFT (1U)
#define KYS_FIFO_MODE_MASK  (0x1 << KYS_FIFO_MODE_SHIFT)
#define KYS_COL_NUM_SHIFT   (20U)
#define KYS_COL_NUM_MASK    (0x1f << KYS_COL_NUM_SHIFT)
#define KYS_KS_DONE_INT_EN_SHIFT          (7U)
#define KYS_KS_DONE_INT_EN_MASK           (0x1 << KYS_KS_DONE_INT_EN_SHIFT)
#define KYS_KEYFIFO_FULL_INT_EN_SHIFT     (8U)
#define KYS_KEYFIFO_FULL_INT_EN_MASK      (0x1 << KYS_KEYFIFO_FULL_INT_EN_SHIFT)
#define KYS_KEYFIFO_HALF_INT_EN_SHIFT     (9U)
#define KYS_KEYFIFO_HALF_INT_EN_MASK      (0x1 << KYS_KEYFIFO_HALF_INT_EN_SHIFT)
#define KYS_KEYFIFO_QUARTER_INT_EN_SHIFT  (10U)
#define KYS_KEYFIFO_QUARTER_INT_EN_MASK   (0x1 << KYS_KEYFIFO_QUARTER_INT_EN_SHIFT)
#define KYS_KEYFIFO_NONEMPTY_INT_EN_SHIFT (11U)
#define KYS_KEYFIFO_NONEMPTY_INT_EN_MASK  (0x1 << KYS_KEYFIFO_NONEMPTY_INT_EN_SHIFT)
#define KYS_GHOST_INT_EN_SHIFT            (12U)
#define KYS_GHOST_INT_EN_MASK             (0x1 << KYS_GHOST_INT_EN_SHIFT)
#define KYS_KEYCODE_DONE_SHIFT     (7U)
#define KYS_KEYCODE_DONE_MASK      (0x1 << KYS_KEYCODE_DONE_SHIFT)
#define KYS_KEYFIFO_FULL_SHIFT     (8U)
#define KYS_KEYFIFO_FULL_MASK      (0x1 << KYS_KEYFIFO_FULL_SHIFT)
#define KYS_KEYFIFO_HALF_SHIFT     (9U)
#define KYS_KEYFIFO_HALF_MSK       (0x1 << KYS_KEYFIFO_HALF_SHIFT)
#define KYS_KEYFIFO_QUARTER_SHIFT  (10U)
#define KYS_KEYFIFO_QUARTER_MSK    (0x1 << KYS_KEYFIFO_QUARTER_SHIFT)
#define KYS_KEYFIFO_NONEMPTY_SHIFT (11U)
#define KYS_KEYFIFO_NONEMPTY_MSK   (0x1 << KYS_KEYFIFO_NONEMPTY_SHIFT)
#define KYS_GHOST_DET_SHIFT        (12U)
#define KYS_GHOST_DET_MASK         (0x1 << KYS_GHOST_DET_SHIFT)
#define KYS_KS_DONE_CLR_SHIFT      (7U)
#define KYS_KS_DONE_CLR_MASK       (0x1 << KYS_KS_DONE_CLR_SHIFT)
#define KYS_KEYFIFO_FULL_CLR_SHIFT (8U)
#define KYS_KEYFIFO_FULL_CLR_MASK  (0x1 << KYS_KEYFIFO_FULL_CLR_SHIFT)
#define KYS_GHOST_CLR_SHIFT        (12U)
#define KYS_GHOST_CLR_MASK         (0x1 << KYS_GHOST_CLR_SHIFT)

/* pwm_v2_reg.h */
#define PWM_SW_USAGE_OFFSET      (0x7C)/* pwm_sw_usage */
#define PWM_HW_VERSION_OFFSET    (0x7C)/* pwm_hw_version */
#define PWM_UPDATE_DISABLE    (1 << 16U)
#define PWM_UPDATE_GENERATE   (1 << 17U)
#define PWM_CENTER_ALIGNED_EN (1 << 18U)
/* 0x7C : pwm_sw_usage and pwm_hw_version */
#define PWM_SW_USAGE_SHIFT   (0U)
#define PWM_SW_USAGE_MASK    (0xffffff << PWM_SW_USAGE_SHIFT)
#define PWM_HW_VERSION_SHIFT (24U)
#define PWM_HW_VERSION_MASK  (0xff << PWM_HW_VERSION_SHIFT)

/* rtc_reg.h */
#define HBN_RTC_CTL_MASK             (0x7 << HBN_RTC_CTL_SHIFT)

/* ef_ctrl_reg.h */
#define EF_CTRL_EF_PCLK_FORCE_ON       EF_CTRL_EF_PCLK_FORCE_ON
#define EF_CTRL_EF_PCLK_FORCE_ON_POS   (17U)
#define EF_CTRL_EF_PCLK_FORCE_ON_LEN   (1U)
#define EF_CTRL_EF_PCLK_FORCE_ON_MASK  (((1U << EF_CTRL_EF_PCLK_FORCE_ON_LEN) - 1) << EF_CTRL_EF_PCLK_FORCE_ON_POS)
#define EF_CTRL_EF_PCLK_FORCE_ON_UMASK (~(((1U << EF_CTRL_EF_PCLK_FORCE_ON_LEN) - 1) << EF_CTRL_EF_PCLK_FORCE_ON_POS))

/* i2c_reg.h */
#define I2C_CR_I2C_10B_ADDR_EN    (1 << 7U)
#define I2C_CR_I2C_SLV_ADDR_SHIFT (8U)
#define I2C_CR_I2C_SLV_ADDR_MASK  (0x3ff << I2C_CR_I2C_SLV_ADDR_SHIFT)
#define I2C_CR_I2C_PKT_LEN_SHIFT  (18U)
#define I2C_CR_I2C_PKT_LEN_MASK   (0x3ff << I2C_CR_I2C_PKT_LEN_SHIFT)
#define I2C_CONFIG_1_OFFSET (0x8) /* i2c_config_1 */
#define I2C_M_TO_INT       (1 << 6U)
#define I2C_CR_I2C_M_TO_EN (1 << 7U)
#define I2C_CR_I2C_M_TO_INT_MASK (1 << 14U)
#define I2C_CR_I2C_RES_CLR       (1 << 15U)
#define I2C_CR_I2C_M_TO_CLR (1 << 18U)
#define I2C_RES_INT     (1 << 22U)
#define I2C_CR_RES_MASK (1 << 23U)
#define I2C_CR_I2C_M_TO_INT_EN (1 << 30U)
#define I2C_CR_I2C_RES_EN      (1 << 31U)
/* 0x8 : i2c_config_1 */
#define I2C_CR_I2C_SUB_ADDR_EN           (1 << 0U)
#define I2C_CR_I2C_SUB_ADDR_BC_SHIFT     (1U)
#define I2C_CR_I2C_SUB_ADDR_BC_MASK      (0xf << I2C_CR_I2C_SUB_ADDR_BC_SHIFT)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START1 (1 << 5U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START2 (1 << 6U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START3 (1 << 7U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START4 (1 << 8U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START5 (1 << 9U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START6 (1 << 10U)
#define I2C_CR_I2C_10B_ADDR_EN_RE_START7 (1 << 11U)

/* 0x1C : i2c_re_s_cfg0 */
#define I2C_CR_I2C_SLV_ADDR_RE_START1_SHIFT    (0U)
#define I2C_CR_I2C_SLV_ADDR_RE_START1_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START1_SHIFT)
#define I2C_CR_I2C_SLV_ADDR_RE_START2_SHIFT    (10U)
#define I2C_CR_I2C_SLV_ADDR_RE_START2_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START2_SHIFT)
#define I2C_CR_I2C_SLV_ADDR_RE_START3_SHIFT    (20U)
#define I2C_CR_I2C_SLV_ADDR_RE_START3_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START3_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START1       (1 << 30U)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START2       (1 << 31U)

/* 0x20 : i2c_re_s_cfg1 */
#define I2C_CR_I2C_SLV_ADDR_RE_START4_SHIFT    (0U)
#define I2C_CR_I2C_SLV_ADDR_RE_START4_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START4_SHIFT)
#define I2C_CR_I2C_SLV_ADDR_RE_START5_SHIFT    (10U)
#define I2C_CR_I2C_SLV_ADDR_RE_START5_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START5_SHIFT)
#define I2C_CR_I2C_SLV_ADDR_RE_START6_SHIFT    (20U)
#define I2C_CR_I2C_SLV_ADDR_RE_START6_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START6_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START3       (1 << 30U)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START4       (1 << 31U)

/* 0x24 : i2c_re_s_cfg2 */
#define I2C_CR_I2C_SLV_ADDR_RE_START7_SHIFT    (0U)
#define I2C_CR_I2C_SLV_ADDR_RE_START7_MASK     (0x3ff << I2C_CR_I2C_SLV_ADDR_RE_START7_SHIFT)
#define I2C_CR_I2C_PKT_LEN_RE_START1_SHIFT     (10U)
#define I2C_CR_I2C_PKT_LEN_RE_START1_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START1_SHIFT)
#define I2C_CR_I2C_PKT_LEN_RE_START2_SHIFT     (20U)
#define I2C_CR_I2C_PKT_LEN_RE_START2_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START2_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START5       (1 << 30U)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START6       (1 << 31U)

/* 0x28 : i2c_re_s_cfg3 */
#define I2C_CR_I2C_PKT_LEN_RE_START3_SHIFT     (0U)
#define I2C_CR_I2C_PKT_LEN_RE_START3_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START3_SHIFT)
#define I2C_CR_I2C_PKT_LEN_RE_START4_SHIFT     (10U)
#define I2C_CR_I2C_PKT_LEN_RE_START4_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START4_SHIFT)
#define I2C_CR_I2C_PKT_LEN_RE_START5_SHIFT     (20U)
#define I2C_CR_I2C_PKT_LEN_RE_START5_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START5_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_EN_RE_START7       (1 << 30U)

/* 0x2C : i2c_re_s_cfg4 */
#define I2C_CR_I2C_PKT_LEN_RE_START6_SHIFT     (0U)
#define I2C_CR_I2C_PKT_LEN_RE_START6_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START6_SHIFT)
#define I2C_CR_I2C_PKT_LEN_RE_START7_SHIFT     (10U)
#define I2C_CR_I2C_PKT_LEN_RE_START7_MASK      (0x3ff << I2C_CR_I2C_PKT_LEN_RE_START7_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START1_SHIFT (20U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START1_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START1_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START2_SHIFT (24U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START2_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START2_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START3_SHIFT (28U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START3_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START3_SHIFT)

/* 0x30 : i2c_re_s_cfg5 */
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START4_SHIFT (0U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START4_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START4_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START5_SHIFT (4U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START5_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START5_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START6_SHIFT (8U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START6_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START6_SHIFT)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START7_SHIFT (12U)
#define I2C_CR_I2C_SUB_ADDR_BC_RE_START7_MASK  (0xf << I2C_CR_I2C_SUB_ADDR_BC_RE_START7_SHIFT)
#define I2C_CR_I2C_PKT_DIR_RE_START1           (1 << 16U)
#define I2C_CR_I2C_PKT_DIR_RE_START2           (1 << 17U)
#define I2C_CR_I2C_PKT_DIR_RE_START3           (1 << 18U)
#define I2C_CR_I2C_PKT_DIR_RE_START4           (1 << 19U)
#define I2C_CR_I2C_PKT_DIR_RE_START5           (1 << 20U)
#define I2C_CR_I2C_PKT_DIR_RE_START6           (1 << 21U)
#define I2C_CR_I2C_PKT_DIR_RE_START7           (1 << 22U)
#define I2C_CR_I2C_RE_START_EN                 (1 << 23U)
#define I2C_CR_I2C_RE_START_TRIG               (1 << 24U)
#define I2C_CR_I2C_RE_START_NUM_SHIFT          (25U)
#define I2C_CR_I2C_RE_START_NUM_MASK           (0x7 << I2C_CR_I2C_RE_START_NUM_SHIFT)
#define I2C_CR_I2C_RE_START_NO_TRIG            (1 << 28U)

#define I2C_CR_I2C_M_TO_POP_VALUE_SHIFT (12U)
#define I2C_CR_I2C_M_TO_POP_VALUE_MASK  (0xfffff << I2C_CR_I2C_M_TO_POP_VALUE_SHIFT)

#define I2C_TX_FIFO_CNT_SHIFT (0U)
#define I2C_TX_FIFO_CNT_MASK  (0x7 << I2C_TX_FIFO_CNT_SHIFT)
#define I2C_RX_FIFO_CNT_SHIFT (8U)
#define I2C_RX_FIFO_CNT_MASK  (0x3 << I2C_RX_FIFO_CNT_SHIFT)
#define I2C_TX_FIFO_TH_SHIFT  (15U)
#define I2C_TX_FIFO_TH_MASK   (0x3 << I2C_TX_FIFO_TH_SHIFT)
#define I2C_RX_FIFO_TH        (1 << 24U)

/* 0x90 : i2c_sw_usage and i2c_hw_version */
#define I2C_SW_USAGE_SHIFT   (0U)
#define I2C_SW_USAGE_MASK    (0xffffff << I2C_SW_USAGE_SHIFT)
#define I2C_HW_VERSION_SHIFT (24U)
#define I2C_HW_VERSION_MASK  (0xff << I2C_HW_VERSION_SHIFT)

/* bflb_uart.h */
#define UART_FIFO_MAX         32

/* emac_reg.h */
#define EMAC_100M     (1 << 18U)

/* dbi_reg.h */
/* 0x84 : dbi_fifo_config_1 */
#define DBI_TX_FIFO_CNT_SHIFT       (0U)
#define DBI_TX_FIFO_CNT_MASK        (0x1f << DBI_TX_FIFO_CNT_SHIFT)
#define DBI_TX_FIFO_TH_SHIFT        (16U)
#define DBI_TX_FIFO_TH_MASK         (0xf << DBI_TX_FIFO_TH_SHIFT)

/* sec_eng_reg.h */
#define SEC_ENG_SE_AES_0_KEY_SEL_MASK  (0x7 << SEC_ENG_SE_AES_0_KEY_SEL_SHIFT)

/* mjpeg_reg.h */
#define MJPEG_KICK_DONE_DELAY_OFFSET                            (0x104)/* mjpeg delay count when kick encode done to generate kick interrupt */
#define MJPEG_SW_USAGE_OFFSET                                   (0x1F8)/* mjpeg_sw_usage */
#define MJPEG_HW_VERSION_OFFSET                                 (0x1F8)/* mjpeg_hw_version */
#define MJPEG_REG_KICK_DONE_STS_EN                              (1<<14U)
#define MJPEG_KICK_UPDATE_ADDR                                  (1<<30U)
#define MJPEG_REG_INT_KICK_CLR                                  (1<<5U)
#define MJPEG_STS_KICK_INT                                      (1<<23U)
#define MJPEG_REG_INT_KICK_EN                                   (1<<31U)
/* 0X104 : mjpeg kick done delay */
#define MJPEG_KICK_DONE_DELAY_SHIFT                             (0U)
#define MJPEG_KICK_DONE_DELAY_MASK                              (0xfff<<MJPEG_KICK_DONE_DELAY_SHIFT)
#define MJPEG_KICK_INT_BLOCK_NUM_SHIFT                          (12)
#define MJPEG_KICK_INT_BLOCK_NUM_MASK                           (0xfffff<<MJPEG_KICK_INT_BLOCK_NUM_SHIFT)
/* 0x1F8 : mjpeg_sw_usage and mjpeg_hw_version */
#define MJPEG_SW_USAGE_SHIFT                                    (0U)
#define MJPEG_SW_USAGE_MASK                                     (0xffffff<<MJPEG_SW_USAGE_SHIFT)
#define MJPEG_HW_VERSION_SHIFT                                  (24U)
#define MJPEG_HW_VERSION_MASK                                   (0xff<<MJPEG_HW_VERSION_SHIFT)
