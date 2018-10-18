/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 * Copyright (c) 2018 Ioannis Glaropoulos
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* NRF Radio HW timing constants
 * - provided in US and NS (for higher granularity)
 * - based on empirical measurements and sniffer logs
 */

/* TXEN->TXIDLE + TXIDLE->TX (with fast Radio ramp-up mode)
 * in microseconds for LE 1M PHY.
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_FAST_NS 40900 /*40.1 + 0.8*/
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_FAST_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_FAST_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode)
 * in microseconds for LE 1M PHY.
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NS 140900 /*140.1 + 0.8*/
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode
 * and no HW TIFS auto-switch) in microseconds for LE 1M PHY.
 */
 /* 129.5 + 0.8 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NO_HW_TIFS_NS 130300
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_ROUND( \
		HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NO_HW_TIFS_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with fast Radio ramp-up mode)
 * in microseconds for LE 2M PHY.
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_FAST_NS 40000 /* 40.1 - 0.1 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_FAST_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_FAST_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode)
 * in microseconds for LE 2M PHY.
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NS 144900 /* 145 - 0.1 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE 2M PHY.
 */
/* 129.5 - 0.1 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NO_HW_TIFS_NS 129400
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_ROUND( \
		HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NO_HW_TIFS_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with fast Radio ramp-up mode)
 * in microseconds for LE CODED PHY [S2].
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_FAST_NS 43100 /* 40.1 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_FAST_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_FAST_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode)
 * in microseconds for LE 2M PHY [S2].
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NS 133000 /* 130 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE 2M PHY [S2].
 */
/* 129.5 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NO_HW_TIFS_NS 132500
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_ROUND( \
		HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NO_HW_TIFS_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with fast Radio ramp-up mode)
 * in microseconds for LE CODED PHY [S8].
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_FAST_NS 43100 /* 40.1 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_FAST_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_FAST_NS)
/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode)
 * in microseconds for LE 2M PHY [S8].
 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NS 122600 /*119.6 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_US \
	HAL_RADIO_NS2US_ROUND(HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NS)

/* TXEN->TXIDLE + TXIDLE->TX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE 2M PHY [S8].
 */
 /* 129.5 + 3.0 */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NO_HW_TIFS_NS 132500
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_ROUND( \
		HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NO_HW_TIFS_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with fast Radio ramp-up mode)
 * in microseconds for LE 1M PHY.
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_FAST_NS 40300 /* 40.1 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_FAST_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_FAST_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode)
 * in microseconds for LE 1M PHY.
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NS 140300 /*140.1 + 0.2*/
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE 1M PHY.
 */
/* 129.5 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NO_HW_TIFS_NS 129700
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_CEIL( \
		HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NO_HW_TIFS_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with fast Radio ramp-up mode)
 * in microseconds for LE 2M PHY.
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_FAST_NS 40300 /* 40.1 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_FAST_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_FAST_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode)
 * in microseconds for LE 2M PHY.
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NS 144800 /*144.6 + 0.2*/
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE 2M PHY.
 */
/* 129.5 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NO_HW_TIFS_NS 129700
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_CEIL( \
		HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NO_HW_TIFS_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with fast Radio ramp-up mode)
 * in microseconds for LE Coded PHY [S2].
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_FAST_NS 40300 /* 40.1 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_FAST_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_FAST_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode)
 * in microseconds for LE Coded PHY [S2].
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NS 130200 /* 130 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode
 * and no HW TIFS auto-switch) in microseconds for LE Coded PHY [S2].
 */
/* 129.5 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NO_HW_TIFS_NS 129700
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_CEIL( \
		HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NO_HW_TIFS_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with fast Radio ramp-up mode)
 * in microseconds for LE Coded PHY [S8].
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_FAST_NS 40300 /* 40.1 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_FAST_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_FAST_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode)
 * in microseconds for LE Coded PHY [S8].
 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NS 120200 /* 120.0 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_US \
	HAL_RADIO_NS2US_CEIL(HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NS)

/* RXEN->RXIDLE + RXIDLE->RX (with default Radio ramp-up mode and
 * no HW TIFS auto-switch) in microseconds for LE Coded PHY [S8].
 */
/* 129.5 + 0.2 */
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NO_HW_TIFS_NS 129700
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NO_HW_TIFS_US \
	HAL_RADIO_NS2US_CEIL( \
		HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NO_HW_TIFS_NS)

#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_1M_US  1 /* ceil(0.6) */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_1M_NS  600 /* 0.6 */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_2M_US  1 /* ceil(0.6) */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_2M_NS  600 /* 0.6 */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S2_US  1 /* ceil(0.6) */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S2_NS  600 /* 0.6 */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S8_US  1 /* ceil(0.6) */
#define HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S8_NS  600 /* 0.6 */

#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_1M_US  10 /* ceil(9.4) */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_1M_NS  9400 /* 9.4 */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_2M_US  5 /* ceil(5.0) */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_2M_NS  5000 /* 5.0 */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S2_US  20 /* ceil(19.6) */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S2_NS  19600 /* 19.6 */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S8_US  30 /* ceil(29.6 - 0.3) */
#define HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S8_NS  29300 /* 29.6 - 0.3*/

#if defined(CONFIG_BT_CTLR_RADIO_ENABLE_FAST)
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_FAST_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_FAST_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_FAST_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_FAST_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_FAST_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_FAST_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_FAST_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_FAST_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_FAST_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_FAST_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_FAST_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_FAST_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_FAST_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_FAST_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_FAST_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_FAST_NS

#else /* !CONFIG_BT_CTLR_RADIO_ENABLE_FAST */
#if defined(CONFIG_BT_CTLR_TIFS_HW)
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NS

#else /* !CONFIG_BT_CTLR_TIFS_HW */
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_US \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_NS \
	HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_DEFAULT_NO_HW_TIFS_NS

#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_US \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NO_HW_TIFS_US
#define HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_NS \
	HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_DEFAULT_NO_HW_TIFS_NS
#endif /* !CONFIG_BT_CTLR_TIFS_HW */
#endif /* !CONFIG_BT_CTLR_RADIO_ENABLE_FAST */

#if !defined(CONFIG_BT_CTLR_TIFS_HW)
#if defined(CONFIG_BT_CTLR_SW_SWITCH_SINGLE_TIMER)
#undef EVENT_TIMER
#define EVENT_TIMER NRF_TIMER4
#define SW_SWITCH_TIMER EVENT_TIMER
#define SW_SWITCH_TIMER_EVTS_COMP_BASE 3
#define SW_SWITCH_TIMER_EVTS_COMP_S2_BASE 5
#undef HAL_EVENT_TIMER_SAMPLE_CC_OFFSET
#define HAL_EVENT_TIMER_SAMPLE_CC_OFFSET 2
#undef HAL_EVENT_TIMER_SAMPLE_TASK
#define HAL_EVENT_TIMER_SAMPLE_TASK NRF_TIMER_TASK_CAPTURE2

#else /* !CONFIG_BT_CTLR_SW_SWITCH_SINGLE_TIMER */
#define SW_SWITCH_TIMER NRF_TIMER1
#define SW_SWITCH_TIMER_EVTS_COMP_BASE 0
#define SW_SWITCH_TIMER_EVTS_COMP_S2_BASE 2
#endif /* !CONFIG_BT_CTLR_SW_SWITCH_SINGLE_TIMER */

#define SW_SWITCH_TIMER_TASK_GROUP_BASE 0
#endif /* !CONFIG_BT_CTLR_TIFS_HW */

static inline void hal_radio_reset(void)
{
	/* Anomalies 102, 106 and 107 */
	*(volatile u32_t *)0x40001774 = ((*(volatile u32_t *)0x40001774) &
					 0xfffffffe) | 0x01000000;
}

static inline void hal_radio_ram_prio_setup(void)
{
	struct {
		u32_t volatile reserved_0[0x5a0 >> 2];
		u32_t volatile bridge_type;
		u32_t volatile reserved_1[((0xe00 - 0x5a0) >> 2) - 1];
		struct {
			u32_t volatile CPU0;
			u32_t volatile SPIS1;
			u32_t volatile RADIO;
			u32_t volatile ECB;
			u32_t volatile CCM;
			u32_t volatile AAR;
			u32_t volatile SAADC;
			u32_t volatile UARTE;
			u32_t volatile SERIAL0;
			u32_t volatile SERIAL2;
			u32_t volatile NFCT;
			u32_t volatile I2S;
			u32_t volatile PDM;
			u32_t volatile PWM;
		} RAMPRI;
	} volatile *NRF_AMLI = (void volatile *)0x40000000UL;

	NRF_AMLI->RAMPRI.CPU0    = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.SPIS1   = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.RADIO   = 0x00000000UL;
	NRF_AMLI->RAMPRI.ECB     = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.CCM     = 0x00000000UL;
	NRF_AMLI->RAMPRI.AAR     = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.SAADC   = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.UARTE   = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.SERIAL0 = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.SERIAL2 = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.NFCT    = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.I2S     = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.PDM     = 0xFFFFFFFFUL;
	NRF_AMLI->RAMPRI.PWM     = 0xFFFFFFFFUL;
}

static inline u32_t hal_radio_phy_mode_get(u8_t phy, u8_t flags)
{
	u32_t mode;

	switch (phy) {
	case BIT(0):
	default:
		mode = RADIO_MODE_MODE_Ble_1Mbit;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
		/* Workaround: nRF52840 Engineering A Errata ID 164 */
		*(volatile u32_t *)0x4000173c &= ~0x80000000;
#endif /* CONFIG_BT_CTLR_PHY_CODED */

		break;

	case BIT(1):
		mode = RADIO_MODE_MODE_Ble_2Mbit;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
		/* Workaround: nRF52840 Engineering A Errata ID 164 */
		*(volatile u32_t *)0x4000173c &= ~0x80000000;
#endif /* CONFIG_BT_CTLR_PHY_CODED */

		break;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			mode = RADIO_MODE_MODE_Ble_LR125Kbit;
		} else {
			mode = RADIO_MODE_MODE_Ble_LR500Kbit;
		}

		/* Workaround: nRF52840 Engineering A Errata ID 164 */
		*(volatile u32_t *)0x4000173c |= 0x80000000;
		*(volatile u32_t *)0x4000173c =
				((*(volatile u32_t *)0x4000173c) & 0xFFFFFF00) |
				0x5C;
		break;
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}

	return mode;
}

static inline u32_t hal_radio_tx_power_max_get(void)
{
	return RADIO_TXPOWER_TXPOWER_Pos8dBm;
}

static inline u32_t hal_radio_tx_ready_delay_us_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_US;
	case BIT(1):
		return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_US;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_US;
		} else {
			return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_US;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_rx_ready_delay_us_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_US;
	case BIT(1):
		return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_US;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_US;
		} else {
			return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_US;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_tx_chain_delay_us_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_1M_US;
	case BIT(1):
		return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_2M_US;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S8_US;
		} else {
			return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S2_US;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_rx_chain_delay_us_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_1M_US;
	case BIT(1):
		return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_2M_US;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S8_US;
		} else {
			return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S2_US;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_tx_ready_delay_ns_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_1M_NS;
	case BIT(1):
		return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_2M_NS;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S8_NS;
		} else {
			return HAL_RADIO_NRF52840_TXEN_TXIDLE_TX_S2_NS;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_rx_ready_delay_ns_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_1M_NS;
	case BIT(1):
		return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_2M_NS;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S8_NS;
		} else {
			return HAL_RADIO_NRF52840_RXEN_RXIDLE_RX_S2_NS;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_tx_chain_delay_ns_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_1M_NS;
	case BIT(1):
		return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_2M_NS;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S8_NS;
		} else {
			return HAL_RADIO_NRF52840_TX_CHAIN_DELAY_S2_NS;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}

static inline u32_t hal_radio_rx_chain_delay_ns_get(u8_t phy, u8_t flags)
{
	switch (phy) {
	default:
	case BIT(0):
		return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_1M_NS;
	case BIT(1):
		return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_2M_NS;

#if defined(CONFIG_BT_CTLR_PHY_CODED)
	case BIT(2):
		if (flags & 0x01) {
			return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S8_NS;
		} else {
			return HAL_RADIO_NRF52840_RX_CHAIN_DELAY_S2_NS;
		}
#endif /* CONFIG_BT_CTLR_PHY_CODED */
	}
}