/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2018 Bouffalolab.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef REG_IPC_APP_H_
#define REG_IPC_APP_H_

/*
 * Application-side IPC mailbox registers of the wifi4 MAC, from the
 * vendor bl60x_wifi_driver (reg_ipc_app.h / reg_access.h).  Offsets are
 * relative to the IPC register block, which sits at IPC_REG_BASE_ADDR
 * from the WiFi block base.
 */

#define IPC_REG_BASE_ADDR 0x00800000

#define IPC_APP2EMB_TRIGGER_OFFSET 0x00000000
#define IPC_APP2EMB_TRIGGER_INDEX  0x00000000

#define IPC_EMB2APP_RAWSTATUS_OFFSET 0x00000004
#define IPC_EMB2APP_RAWSTATUS_INDEX  0x00000001

#define IPC_EMB2APP_ACK_OFFSET 0x00000008
#define IPC_EMB2APP_ACK_INDEX  0x00000002

#define IPC_EMB2APP_UNMASK_SET_OFFSET 0x0000000C
#define IPC_EMB2APP_UNMASK_SET_INDEX  0x00000003

#define IPC_EMB2APP_UNMASK_CLEAR_OFFSET 0x00000010
#define IPC_EMB2APP_UNMASK_CLEAR_INDEX  0x00000004

#define IPC_EMB2APP_STATUS_OFFSET 0x0000001C
#define IPC_EMB2APP_STATUS_INDEX  0x00000007

#define IPC_APP_SIGNATURE_OFFSET 0x00000040
#define IPC_APP_SIGNATURE_INDEX  0x00000010

#endif /* REG_IPC_APP_H_ */
