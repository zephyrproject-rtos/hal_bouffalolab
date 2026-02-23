/*
 * Copyright (c) 2025 Bouffalo lab
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __BL808_H__
#define __BL808_H__

/** @addtogroup Configuration_section_for_RISCV
  * @{
  */

/**
  * @brief Configuration of the Processor and Core Peripherals
   */

#define CORE_ID_ADDRESS       (0xF0000000)
#define CORE_ID_M0            (0xE9070000)
#define CORE_ID_D0            (0xDEAD5500)
#define CORE_ID_LP            (0xDEADE902)

#define CORE_M0_JTAG_TCK_PIN  (GLB_GPIO_PIN_27)
#define CORE_M0_JTAG_TMS_PIN  (GLB_GPIO_PIN_28)
#define CORE_M0_JTAG_TCK_FUNC (GPIO_FUN_M_CJTAG)
#define CORE_M0_JTAG_TMS_FUNC (GPIO_FUN_M_CJTAG)

#define IPC_SYNC_ADDR1 0x40000000
#define IPC_SYNC_ADDR2 0x40000004
#define IPC_SYNC_FLAG  0x12345678

/**
 * @brief BL808 Memory Map Definitions
 */
#define BL808_OCRAM_BASE                     (0x22020000)
#define BL808_OCRAM_END                      (0x22020000 + 64 * 1024)
#define BL808_OCRAM_CACHEABLE_BASE           (0x62020000)
#define BL808_OCRAM_CACHEABLE_END            (0x62020000 + 64 * 1024)

#define BL808_WRAM_BASE                      (0x22030000)
#define BL808_WRAM_END                       (0x22030000 + 160 * 1024)
#define BL808_WRAM_CACHEABLE_BASE            (0x62030000)
#define BL808_WRAM_CACHEABLE_END             (0x62030000 + 160 * 1024)

#define BL808_MCU_ALLRAM_BASE                (0x22020000)
#define BL808_MCU_ALLRAM_END                 (0x22020000 + 64 * 1024 + 160 * 1024)
#define BL808_MCU_ALLRAM_CACHEABLE_BASE      (0x62020000)
#define BL808_MCU_ALLRAM_CACHEABLE_END       (0x62020000 + 64 * 1024 + 160 * 1024)

#define BL808_DRAM_BASE                      (0x3EF80000)
#define BL808_DRAM_END                       (0x3EF80000 + 512 * 1024)
#define BL808_DRAM_CACHEABLE_BASE            (0x7EF80000)
#define BL808_DRAM_CACHEABLE_END             (0x7EF80000 + 512 * 1024)

#define BL808_VRAM_BASE                      (0x3F000000)
#define BL808_VRAM_END                       (0x3F000000 + 32 * 1024)
#define BL808_VRAM_CACHEABLE_BASE            (0x7F000000)
#define BL808_VRAM_CACHEABLE_END             (0x7F000000 + 32 * 1024)

#define BL808_MM_ALLRAM_BASE                 (0x3EF80000)
#define BL808_MM_ALLRAM_END                  (0x3EF80000 + 512 * 1024 + 32 * 1024)
#define BL808_MM_ALLRAM_CACHEABLE_BASE       (0x7EF80000)
#define BL808_MM_ALLRAM_CACHEABLE_END        (0x7EF80000 + 512 * 1024 + 32 * 1024)

#define BL808_FLASH_XIP_BASE                 (0x58000000)
#define BL808_FLASH_XIP_END                  (0x58000000 + 64 * 1024 * 1024)
#define BL808_FLASH2_XIP_BASE                (0x5C000000)
#define BL808_FLASH2_XIP_END                 (0x5C000000 + 64 * 1024 * 1024)
#define BL808_FLASH_XIP_REMAP0_BASE          (0xD8000000)
#define BL808_FLASH_XIP_REMAP0_END           (0xD8000000 + 64 * 1024 * 1024)
#define BL808_FLASH2_XIP_REMAP0_BASE         (0xDC000000)
#define BL808_FLASH2_XIP_REMAP0_END          (0xDC000000 + 64 * 1024 * 1024)

#define BL808_MM_WHOLERAM_BASE               (0x3EF80000)
#define BL808_MM_WHOLERAM_END                (0x3EF80000 + 512 * 1024 + 96 * 1024)
#define BL808_MM_WHOLERAM_CACHEABLE_BASE     (0x7EF80000)
#define BL808_MM_WHOLERAM_CACHEABLE_END      (0x7EF80000 + 512 * 1024 + 96 * 1024)

/*@} end of group Memory_Map_Section */

/* BL808 peripherals base address */
/* WLSYS */
#define GLB_BASE                             ((uint32_t)0x20000000)
#define MIX_BASE                             ((uint32_t)0x20001000)
#define GPIP_BASE                            ((uint32_t)0x20002000)
#define PHY_BASE                             ((uint32_t)0x20002800)
#define AGC_BASE                             ((uint32_t)0x20002c00)
#define SEC_DBG_BASE                         ((uint32_t)0x20003000)
#define SEC_ENG_BASE                         ((uint32_t)0x20004000)
#define TZ1_BASE                             ((uint32_t)0x20005000)
#define TZC_SEC_BASE                         ((uint32_t)0x20005000)
#define TZ2_BASE                             ((uint32_t)0x20006000)
#define TZC_NSEC_BASE                        ((uint32_t)0x20006000)
#define EFUSE_BASE                           ((uint32_t)0x20056000)
#define EF_DATA_BASE                         ((uint32_t)0x20056000)
#define EF_CTRL_BASE                         ((uint32_t)0x20056000)
#define CCI_BASE                             ((uint32_t)0x20008000)
#define MCU_MISC_BASE                        ((uint32_t)0x20009000)
#define L1C_BASE                             ((uint32_t)0x20009000)
#define UART0_BASE                           ((uint32_t)0x2000a000)
#define UART1_BASE                           ((uint32_t)0x2000a100)
#define SPI0_BASE                            ((uint32_t)0x2000a200)
#define I2C0_BASE                            ((uint32_t)0x2000a300)
#define PWM_BASE                             ((uint32_t)0x2000a400)
#define TIMER0_BASE                          ((uint32_t)0x2000a500)
#define IR_BASE                              ((uint32_t)0x2000a600)
#define CKS_BASE                             ((uint32_t)0x2000a700)
#define IPC0_BASE                            ((uint32_t)0x2000a800)
#define IPC1_BASE                            ((uint32_t)0x2000a840)
#define I2C1_BASE                            ((uint32_t)0x2000a900)
#define UART2_BASE                           ((uint32_t)0x2000aa00)
#define I2S_BASE                             ((uint32_t)0x2000ab00)
#define PDM0_BASE                            ((uint32_t)0x2000a000)
#define LZ4D_BASE                            ((uint32_t)0x2000ad00)
#define QSPI_BASE                            ((uint32_t)0x2000b000)
#define SF_CTRL_BASE                         ((uint32_t)0x2000b000)
#define SF_CTRL_BUF_BASE                     ((uint32_t)0x2000b600)
#define DMA0_BASE                            ((uint32_t)0x2000c000)
#define PDS_BASE                             ((uint32_t)0x2000e000)
#define HBN_BASE                             ((uint32_t)0x2000f000)
#define AON_BASE                             ((uint32_t)0x2000f000)
#define EMI_MISC_BASE                        ((uint32_t)0x20050000)
#define PSRAM_CTRL_BASE                      ((uint32_t)0x20052000)
#define USB_BASE                             ((uint32_t)0x20072000)
#define AUDIO_BASE                           ((uint32_t)0x20055000)
#define SDH_BASE                             ((uint32_t)0x20060000)
#define EMAC_BASE                            ((uint32_t)0x20070000)
#define DMA1_BASE                            ((uint32_t)0x20071000)

/* MMSYS */
#define MM_MISC_BASE                         ((uint32_t)0x30000000)
#define DMA2_BASE                            ((uint32_t)0x30001000)
#define UART3_BASE                           ((uint32_t)0x30002000)
#define I2C2_BASE                            ((uint32_t)0x30003000)
#define I2C3_BASE                            ((uint32_t)0x30004000)
#define IPC2_BASE                            ((uint32_t)0x30005000)
#define DMA2D_BASE                           ((uint32_t)0x30006000)
#define CLKRST_CTRL_BASE                     ((uint32_t)0x30007000)
#define MM_GLB_BASE                          ((uint32_t)0x30007000)
#define SPI1_BASE                            ((uint32_t)0x30008000)
#define TIMER1_BASE                          ((uint32_t)0x30009000)
#define PSRAM_UHS_BASE                       ((uint32_t)0x3000f000)

/* SUBSYS */
#define SUB_MISC_BASE                        ((uint32_t)0x30010000)
#define SUB_BASE                             ((uint32_t)0x30011000)
#define DVP0_BASE                            ((uint32_t)0x30012000)
#define DVP1_BASE                            ((uint32_t)0x30012100)
#define DVP2_BASE                            ((uint32_t)0x30012200)
#define DVP3_BASE                            ((uint32_t)0x30012300)
#define DVP4_BASE                            ((uint32_t)0x30012400)
#define DVP5_BASE                            ((uint32_t)0x30012500)
#define DVP6_BASE                            ((uint32_t)0x30012600)
#define DVP7_BASE                            ((uint32_t)0x30012700)
#define DVP_TSRC0_BASE                       ((uint32_t)0x30012800)
#define DVP_TSRC1_BASE                       ((uint32_t)0x30012900)
#define AXI_CTRL_NR3D_BASE                   ((uint32_t)0x30012a00)
#define OSD_PROBE_BASE                       ((uint32_t)0x30012b00)
#define OSD_A_BASE                           ((uint32_t)0x30013000)
#define OSD_B_BASE                           ((uint32_t)0x30014000)
#define OSD_DP_BASE                          ((uint32_t)0x30015000)
#define OSD_BLEND0_OFFSET                    (0x000)
#define OSD_BLEND1_OFFSET                    (0x100)
#define OSD_BLEND2_OFFSET                    (0x200)
#define OSD_BLEND3_OFFSET                    (0x300)
#define OSD_DRAW_LOW_OFFSET                  (0x400)
#define OSD_DRAW_HIGH_OFFSET                 (0x504)
#define MIPI_BASE                            ((uint32_t)0x3001a000)
#define DBI_BASE                             ((uint32_t)0x3001b000)
#define DSI_BASE                             ((uint32_t)0x3001a100)
#define CSI_BASE                             ((uint32_t)0x3001a000)

/* CODEC_SUBSYS */
#define CODEC_MISC_BASE                      ((uint32_t)0x30020000)
#define MJPEG_BASE                           ((uint32_t)0x30021000)
#define VIDEO_BASE                           ((uint32_t)0x30022000)
#define MJPEG_DEC_BASE                       ((uint32_t)0x30023000)
#define BL_CNN_BASE                          ((uint32_t)0x30024000)

#define HBN_RAM_BASE                         ((uint32_t)0x20010000)

#define RF_BASE                              ((uint32_t)0x20001000)

typedef enum {
    BL_AHB_MASTER_CPU = 0x00,
    BL_AHB_MASTER_SDU = 0x01,
    BL_AHB_MASTER_SEC = 0x02,
    BL_AHB_MASTER_DMA = 0x03,
    BL_AHB_MASTER_CCI = 0x04,
    BL_AHB_MASTER_WIFI_PLATFORM = 0x05,
    BL_AHB_MASTER_WIFI_MAC_PHY = 0x06,
    BL_AHB_MASTER_WIFI_PHY = 0x07,
    BL_AHB_MASTER_MAX = 0x08,
} BL_AHB_Master_Type;

typedef enum {
    BL_AHB_SLAVE1_GLB = 0x00,    /* cgen rsvd */
    BL_AHB_SLAVE1_RF_TOP = 0x01, /* swrst mix */
    BL_AHB_SLAVE1_GPIP = 0x02,
    BL_AHB_SLAVE1_SEC_DBG = 0x03,
    BL_AHB_SLAVE1_SEC_ENG = 0x04,
    BL_AHB_SLAVE1_TZ = 0x05,    /* swrst tz1, cgen tz1+tz2 */
    BL_AHB_SLAVE1_RSVD6 = 0x06, /* swrst tz2 */
    BL_AHB_SLAVE1_EF_CTRL = 0x07,
    BL_AHB_SLAVE1_CCI = 0x08, /* cgen rsvd */
    BL_AHB_SLAVE1_L1C = 0x09, /* cgen rsvd */
    BL_AHB_SLAVE1_RSVD10 = 0x0A,
    BL_AHB_SLAVE1_SF_CTRL = 0x0B,
    BL_AHB_SLAVE1_DMA = 0x0C,
    BL_AHB_SLAVE1_SDU = 0x0D, /* cgen rsvd */
    BL_AHB_SLAVE1_PDS = 0x0E, /* cgen rsvd */
    BL_AHB_SLAVE1_RSVD15 = 0x0F,
    BL_AHB_SLAVE1_UART0 = 0x10,
    BL_AHB_SLAVE1_UART1 = 0x11,
    BL_AHB_SLAVE1_SPI = 0x12,
    BL_AHB_SLAVE1_I2C = 0x13,
    BL_AHB_SLAVE1_PWM = 0x14,
    BL_AHB_SLAVE1_TIMER = 0x15,
    BL_AHB_SLAVE1_IRR = 0x16,
    BL_AHB_SLAVE1_CKS = 0x17,
    BL_AHB_SLAVE1_QDEC = 0x18,
    BL_AHB_SLAVE1_KYS = 0x19,
    BL_AHB_SLAVE1_UART2 = 0x1A,
    BL_AHB_SLAVE1_RSVD27 = 0x1B,
    BL_AHB_SLAVE1_RSVD28 = 0x1C,
    BL_AHB_SLAVE1_RSVD29 = 0x1D,
    BL_AHB_SLAVE1_RSVD30 = 0x1E,
    BL_AHB_SLAVE1_RSVD31 = 0x1F,
    BL_AHB_SLAVE1_MAX = 0x20,
    BL_AHB_SLAVE1_GPADC = 0x21, /* not used for cgen and swrst */
    BL_AHB_SLAVE1_GPDAC = 0x22, /* not used for cgen and swrst */
    BL_AHB_SLAVE1_I2S = 0x23,   /* not used for cgen and swrst */
    BL_AHB_SLAVE1_CAM = 0x24,   /* not used for cgen and swrst */
} BL_AHB_Slave1_Type;

typedef enum {
    BL_AHB_SLAVE2_RSVD0 = 0x00,
    BL_AHB_SLAVE2_RSVD1 = 0x01,
    BL_AHB_SLAVE2_RSVD2 = 0x02,
    BL_AHB_SLAVE2_RSVD3 = 0x03,
    BL_AHB_SLAVE2_WIFI = 0x04,
    BL_AHB_SLAVE2_RSVD5 = 0x05,
    BL_AHB_SLAVE2_RSVD6 = 0x06,
    BL_AHB_SLAVE2_RSVD7 = 0x07,
    BL_AHB_SLAVE2_BT_BLE = 0x08,
    BL_AHB_SLAVE2_M154 = 0x09,
    BL_AHB_SLAVE2_BT_BLE2 = 0x0A,
    BL_AHB_SLAVE2_M1542 = 0x0B,
    BL_AHB_SLAVE2_RSVD12 = 0x0C,
    BL_AHB_SLAVE2_RSVD13 = 0x0D,
    BL_AHB_SLAVE2_RSVD14 = 0x0E,
    BL_AHB_SLAVE2_RSVD15 = 0x0F,
    BL_AHB_SLAVE2_EXT_EMI_MISC = 0x10,
    BL_AHB_SLAVE2_EXT_PSRAM0_CTRL = 0x11,
    BL_AHB_SLAVE2_EXT_PSRAM1_CTRL = 0x12,
    BL_AHB_SLAVE2_EXT_USB = 0x13,
    BL_AHB_SLAVE2_EXT_MIX2 = 0x14,
    BL_AHB_SLAVE2_EXT_AUDIO = 0x15,
    BL_AHB_SLAVE2_EXT_SDH = 0x16,
    BL_AHB_SLAVE2_EXT_EMAC = 0x17,
    BL_AHB_SLAVE2_EXT_DMA2 = 0x18,
    BL_AHB_SLAVE2_EXT_RSVD25 = 0x19,
    BL_AHB_SLAVE2_EXT_RSVD26 = 0x1A,
    BL_AHB_SLAVE2_EXT_RSVD27 = 0x1B,
    BL_AHB_SLAVE2_MAX = 0x1C,
} BL_AHB_Slave2_Type;

typedef enum {
    BL_AHB_SLAVE3_WIFIPLL_240M = 0x00,
    BL_AHB_SLAVE3_CPUPLL_120M = 0x01,
    BL_AHB_SLAVE3_CPUPLL_300M = 0x02,
    BL_AHB_SLAVE3_CPUPLL_600M = 0x03,
    BL_AHB_SLAVE3_MAX = 0x04,
} BL_AHB_Slave3_Type;

typedef enum {
    BL_AHB_SEC_ENG_AES0 = 0,
    BL_AHB_SEC_ENG_AES1,
    BL_AHB_SEC_ENG_SHA0,
    BL_AHB_SEC_ENG_SHA1,
} BL_AHB_Sec_Eng_Type;

typedef enum {
    BL_AHB_DMA0_CH0 = 0,
    BL_AHB_DMA0_CH1,
    BL_AHB_DMA0_CH2,
    BL_AHB_DMA0_CH3,
    BL_AHB_DMA0_CH4,
    BL_AHB_DMA0_CH5,
    BL_AHB_DMA0_CH6,
    BL_AHB_DMA0_CH7,
} BL_AHB_DMA0_CHNL_Type;

typedef enum {
    BL_CORE_MASTER_IBUS_CPU = 0,
    BL_CORE_MASTER_DBUS_CPU,
    BL_CORE_MASTER_BUS_S2F,
    BL_CORE_MASTER_MAX,
} BL_Core_Master_Type;

typedef enum {
    BL_CORE_SLAVE0_DTCM_CPU = 0,
    BL_CORE_SLAVE0_MAX,
} BL_Core_Slave0_Type;

typedef enum {
    BL_CORE_SLAVE1_XIP_CPU = 0,
    BL_CORE_SLAVE1_ITCM_CPU,
    BL_CORE_SLAVE1_ROM,
    BL_CORE_SLAVE1_MAX,
} BL_Core_Slave1_Type;

typedef enum {
    BL_CORE_SLAVE2_F2S = 0,
    BL_CORE_SLAVE2_MAX,
} BL_Core_Slave2_Type;

#endif
