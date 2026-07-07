/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2026 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef BTBLECONTROLLER_PORT_API_H_
#define BTBLECONTROLLER_PORT_API_H_

void btblecontroller_ble_irq_init(void *handler);
void btblecontroller_bt_irq_init(void *handler);
void btblecontroller_dm_irq_init(void *handler);
void btblecontroller_ble_irq_enable(uint8_t enable);
void btblecontroller_bt_irq_enable(uint8_t enable);
void btblecontroller_dm_irq_enable(uint8_t enable);
void btblecontroller_enable_ble_clk(uint8_t enable);
void btblecontroller_rf_restore(void);
int btblecontroller_efuse_read_mac(uint8_t mac[6]);
void btblecontroller_software_btdm_reset(void);
void btblecontroller_software_pds_reset(void);
void btblecontroller_pds_trim_rc32m(void);
uint8_t btblecontrolller_get_chip_version(void);
void btblecontroller_sys_reset(void);
int btblecontroller_putchar(int c);
void btblecontroller_puts(const char *str);

#endif /* BTBLECONTROLLER_PORT_API_H_ */
