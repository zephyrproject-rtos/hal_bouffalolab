/*
 * Copyright (c) 2025 Bouffalo lab
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _BFLB_UART_H
#define _BFLB_UART_H

#define UART_DIRECTION_TX     (1 << 0)
#define UART_DIRECTION_RX     (1 << 1)
#define UART_DIRECTION_TXRX   (UART_DIRECTION_TX | UART_DIRECTION_RX)
#define UART_DIRECTION_MASK   UART_DIRECTION_TXRX

#define UART_DATA_BITS_5      0
#define UART_DATA_BITS_6      1
#define UART_DATA_BITS_7      2
#define UART_DATA_BITS_8      3

#define UART_STOP_BITS_0_5    0
#define UART_STOP_BITS_1      1
#define UART_STOP_BITS_1_5    2
#define UART_STOP_BITS_2      3

#define UART_PARITY_NONE      0
#define UART_PARITY_ODD       1
#define UART_PARITY_EVEN      2
#define UART_PARITY_MARK      3
#define UART_PARITY_SPACE     4

#define UART_LSB_FIRST        0
#define UART_MSB_FIRST        1

#define UART_FLOWCTRL_NONE    0
#define UART_FLOWCTRL_RTS     (1 << 0)
#define UART_FLOWCTRL_CTS     (1 << 1)
#define UART_FLOWCTRL_RTS_CTS (UART_FLOWCTRL_RTS | UART_FLOWCTRL_CTS)

#define UART_INTSTS_TX_END    (1 << 0)
#define UART_INTSTS_RX_END    (1 << 1)
#define UART_INTSTS_TX_FIFO   (1 << 2)
#define UART_INTSTS_RX_FIFO   (1 << 3)
#define UART_INTSTS_RTO       (1 << 4)
#define UART_INTSTS_PCE       (1 << 5)
#define UART_INTSTS_TX_FER    (1 << 6)
#define UART_INTSTS_RX_FER    (1 << 7)

#define UART_INTCLR_TX_END (1 << 0)
#define UART_INTCLR_RX_END (1 << 1)
#define UART_INTCLR_RTO    (1 << 4)
#define UART_INTCLR_PCE    (1 << 5)

#define UART_CMD_SET_BAUD_RATE           (0x01)
#define UART_CMD_SET_DATA_BITS           (0x02)
#define UART_CMD_SET_STOP_BITS           (0x03)
#define UART_CMD_SET_PARITY_BITS         (0x04)
#define UART_CMD_CLR_TX_FIFO             (0x05)
#define UART_CMD_CLR_RX_FIFO             (0x06)
#define UART_CMD_SET_RTO_VALUE           (0x07)
#define UART_CMD_SET_RTS_VALUE           (0x08)
#define UART_CMD_GET_TX_FIFO_CNT         (0x09)
#define UART_CMD_GET_RX_FIFO_CNT         (0x0a)
#define UART_CMD_SET_AUTO_BAUD           (0x0b)
#define UART_CMD_GET_AUTO_BAUD           (0x0c)
#define UART_CMD_SET_BREAK_VALUE         (0x0d)
#define UART_CMD_SET_TX_LIN_VALUE        (0x0e)
#define UART_CMD_SET_RX_LIN_VALUE        (0x0f)
#define UART_CMD_SET_GLITCH_VALUE        (0x10)
#define UART_CMD_SET_TX_RS485_EN         (0x11)
#define UART_CMD_SET_TX_RS485_POLARITY   (0x12)
#define UART_CMD_SET_ABR_ALLOWABLE_ERROR (0x13)
#define UART_CMD_SET_SW_RTS_CONTROL      (0x14)
#define UART_CMD_IR_CONFIG               (0x15)
#define UART_CMD_SET_TX_FREERUN          (0x16)
#define UART_CMD_SET_TX_END_INTERRUPT    (0x17)
#define UART_CMD_SET_RX_END_INTERRUPT    (0x18)
#define UART_CMD_SET_TX_TRANSFER_LEN     (0x19)
#define UART_CMD_SET_RX_TRANSFER_LEN     (0x20)
#define UART_CMD_SET_TX_EN               (0x21)
#define UART_CMD_SET_BCR_END_INTERRUPT   (0x22)
#define UART_CMD_GET_BCR_COUNT           (0x23)
#define UART_CMD_SET_CTS_EN              (0x24)
#define UART_CMD_SET_TX_FIFO_THREHOLD    (0x25)
#define UART_CMD_SET_RX_FIFO_THREHOLD    (0x26)

#define UART_AUTO_BAUD_START             0
#define UART_AUTO_BAUD_0X55              1

#endif
