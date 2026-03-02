/*
 * Copyright (c) 2016-2023 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef BLE_LIB_API_H_
#define BLE_LIB_API_H_

void ble_controller_init(uint8_t task_priority);
void ble_controller_deinit(void);
#if !defined(CONFIG_FREERTOS) && !defined(CONFIG_AOS) && !defined(CONFIG_NUTTX)
void blecontroller_main(void);
#endif
#if defined(CONFIG_BT_RESET)
void ble_controller_reset(void);
#endif
char *ble_controller_get_lib_ver(void);

/* if 0, success.
 * if -1, fail,
 */
int8_t ble_controller_set_scan_filter_table_size(uint8_t size);

/* return sleep duration, in unit of 1/32768s
 * if 0, means not allow sleep
 * if -1, means allow sleep, but there is no end of sleep interrupt
 *        (ble core deep sleep is not enabled)
 */
int32_t ble_controller_sleep(int32_t max_sleep_cycles);
void ble_controller_sleep_restore(void);
bool ble_controller_sleep_is_ongoing(void);
void ble_controller_set_tx_pwr(int ble_tx_power);
int8_t ble_controller_get_tx_pwr(void);
void ble_rf_set_tx_channel(uint16_t tx_channel);
void ble_controller_disable_adv_random_delay(bool disable);

#if defined(CONFIG_BLE_MFG)
#define BLE_TEST_TX	0x00
#define BLE_TEST_RX	0x01
#define BLE_TEST_RXTX	0x02
#define BLE_TEST_END	0x03

/* HCI LE Receiver Test Command parameters structure */
struct le_rx_test_cmd {
	uint8_t rx_freq;
};

/* HCI LE Transmitter Test Command parameters structure */
struct le_tx_test_cmd {
	uint8_t tx_freq;
	uint8_t test_data_len;
	uint8_t pk_payload_type;
};

struct le_enhanced_rx_test_cmd {
	uint8_t rx_freq;
	uint8_t rx_phy;
	uint8_t modulation_index;
};

/* HCI LE Enhanced Transmitter Test Command parameters structure */
struct le_enhanced_tx_test_cmd {
	uint8_t tx_freq;
	uint8_t test_data_len;
	uint8_t pk_payload_type;
	uint8_t tx_phy;
};

int le_rx_test_cmd_handler(uint16_t src_id, void *param, bool from_hci);
int le_tx_test_cmd_handler(uint16_t src_id, void *param, bool from_hci);
int le_test_end_cmd_handler(bool from_hci);
uint8_t le_get_direct_test_type(void);
void le_test_mode_custom_aa(uint32_t access_code);

#if defined(CONFIG_BLE_MFG_HCI_CMD)
int reset_cmd_handler(void);
#endif
#endif

/* ble controller debug level */
#define BT_SCHEDULE_DEBUG_MASK	0x00000001
#define BT_MEM_DEBUG_MASK	0x00000002

void ble_controller_set_debug_level(uint32_t debug_level);
void ble_controller_trace_malloc_init(void *buffer, uint32_t size);

#endif /* BLE_LIB_API_H_ */
