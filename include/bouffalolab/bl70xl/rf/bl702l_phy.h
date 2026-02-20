/*
 * Copyright (c) 2016-2022 Bouffalolab.
 *
 * This file is part of
 *     *** Bouffalolab Software Dev Kit ***
 *      (see www.bouffalolab.com).
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *   3. Neither the name of Bouffalo Lab nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __BL702L_PHY_H__
#define __BL702L_PHY_H__

void bz_phy_reset();
void bz_phy_force_agc_enable(bool en);
bool bz_phy_set_tx_power(int power_dbm);
bool bz_phy_set_tx_power_offset(int8_t pwr_offset_zb[16],
				int8_t pwr_offset_ble[4]);
int bz_phy_get_tx_power(void);
bool bz_phy_optimize_tx_channel(uint32_t channel);
int16_t bz_phy_get_freq_offset_zb(void);
void bz_phy_start_cont_rx_zb();
void bz_phy_stop_cont_rx_zb();
void bz_phy_cw_switch_channel(double cw_freq_hz);
void bz_phy_cw_start();
void bz_phy_cw_stop();

/* BZ_PHY API */
void bz_phy_reset(void);
bool bz_phy_p_mode_enabled(void);
void bz_phy_set_p_mode(uint8_t en);
int bz_phy_get_rssi(void);
int bz_phy_get_lqi(void);
uint8_t bz_phy_get_sfd_correlation(void);
int bz_phy_get_frequency_offset(void);
void bz_phy_set_ed_threshold(int threashold);
int bz_phy_get_ed_threshold(void);
void bz_phy_set_cca_mode(uint8_t mode);
uint8_t bz_phy_run_cca(int *rssi);
void bz_phy_clear_cca_status(void);
void bz_phy_enable_cca_interrupt(void);
void bz_phy_disable_cca_interrupt(void);
void bz_phy_enable_ed(void);
void bz_phy_disable_ed(void);
uint8_t bz_phy_get_ed_meas(void);

#endif
