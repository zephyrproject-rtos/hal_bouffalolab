/*
 * Copyright (c) 2024 Gerson Fernando Budke <nandojve@gmail.com>
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DT_BINDINGS_PINCTRL_BFLB_BL_H_
#define DT_BINDINGS_PINCTRL_BFLB_BL_H_

#define BFLB_PINMUX_SMT_POS			(1U)
#define BFLB_PINMUX_SMT_MASK			(0x1U)

#define BFLB_PINMUX_DRIVER_STRENGTH_POS		(BFLB_PINMUX_SMT_POS + 1U)
#define BFLB_PINMUX_DRIVER_STRENGTH_MASK	(0x3U)

#define BFLB_PINMUX_PULL_UP_POS			(BFLB_PINMUX_DRIVER_STRENGTH_POS + 2U)
#define BFLB_PINMUX_PULL_UP_MASK		(0x1U)

#define BFLB_PINMUX_PULL_DOWN_POS		(BFLB_PINMUX_PULL_UP_POS + 1U)
#define BFLB_PINMUX_PULL_DOWN_MASK		(0x1U)

#define BFLB_PINMUX_PULL_MODES_POS		(BFLB_PINMUX_PULL_UP_POS)
#define BFLB_PINMUX_PULL_MODES_MASK		(0x3U)

#define BFLB_PINMUX_OE_POS			(BFLB_PINMUX_PULL_DOWN_POS + 1U)
#define BFLB_PINMUX_OE_MASK			(0x1U)

#define BFLB_PINMUX_FUN_INST_POS		(BFLB_PINMUX_OE_POS + 2U)
#define BFLB_PINMUX_FUN_INST_MASK		(0x031FU)

#define BFLB_PINMUX_FUN_POS			(BFLB_PINMUX_FUN_INST_POS)
#define BFLB_PINMUX_FUN_MASK			(0x1FU)

#define BFLB_PINMUX_INST_POS			(BFLB_PINMUX_FUN_INST_POS + 8U)
#define BFLB_PINMUX_INST_MASK			(0x03U)
#define BFLB_PINMUX_INST_0			(0x0 << BFLB_PINMUX_INST_POS)
#define BFLB_PINMUX_INST_1			(0x1 << BFLB_PINMUX_INST_POS)

#define BFLB_PINMUX_MODE_POS			(BFLB_PINMUX_INST_POS + 2U)
#define BFLB_PINMUX_MODE_MASK			(0x03U)
#define BFLB_PINMUX_MODE_input			(0x0)
#define BFLB_PINMUX_MODE_output			(0x1)
#define BFLB_PINMUX_MODE_periph			(0x2)
#define BFLB_PINMUX_MODE_analog			(0x3)

#define BFLB_PINMUX_SIGNAL_POS			(BFLB_PINMUX_MODE_POS + 2U)
#define BFLB_PINMUX_SIGNAL_MASK			(0x03U)

#define BFLB_PINMUX_PIN_POS			(BFLB_PINMUX_SIGNAL_POS + 4U)
#define BFLB_PINMUX_PIN_MASK			(0xFFU)

/*
 * @param pin    pin number
 * @param fun    function + instance number
 * @param signal signal name
 * @param mode   (input, output, peripheral, analog)
 */
#define BFLB_PINMUX(pin, fun, signal, mode)				  \
	((((pin) & BFLB_PINMUX_PIN_MASK)			  	  \
	 << BFLB_PINMUX_PIN_POS)					| \
	 (((BFLB_PINMUX_FUN_INST_##fun) & BFLB_PINMUX_FUN_INST_MASK)      \
	 << BFLB_PINMUX_FUN_INST_POS)					| \
	 (((BFLB_PINMUX_SIGNAL_##signal) & BFLB_PINMUX_SIGNAL_MASK)       \
	 << BFLB_PINMUX_SIGNAL_POS)					| \
	 (((BFLB_PINMUX_MODE_##mode) & BFLB_PINMUX_MODE_MASK)		  \
	 << BFLB_PINMUX_MODE_POS))

/**
 * Obtain Pinmux value from pinctrl_soc_pin_t configuration.
 *
 * @param pincfg pinctrl_soc_pin_t bit field value.
 */
#define BFLB_PINMUX_GET_PIN(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_PIN_POS)  & BFLB_PINMUX_PIN_MASK)
#define BFLB_PINMUX_GET_SIGNAL(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_SIGNAL_POS)  & BFLB_PINMUX_SIGNAL_MASK)
#define BFLB_PINMUX_GET_MODE(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_MODE_POS) & BFLB_PINMUX_MODE_MASK)
#define BFLB_PINMUX_GET_INST(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_INST_POS) & BFLB_PINMUX_INST_MASK)
#define BFLB_PINMUX_GET_FUN(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_FUN_POS)  & BFLB_PINMUX_FUN_MASK)
#define BFLB_PINMUX_GET_OE(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_OE_POS)  & BFLB_PINMUX_OE_MASK)
#define BFLB_PINMUX_GET_PULL_DOWN(pincfg)				  \
	(((pincfg) >> BFLB_PINMUX_PULL_DOWN_POS)  & BFLB_PINMUX_PULL_DOWN_MASK)
#define BFLB_PINMUX_GET_PULL_UP(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_PULL_UP_POS)  & BFLB_PINMUX_PULL_UP_MASK)
#define BFLB_PINMUX_GET_PULL_MODES(pincfg)				  \
	(((pincfg) >> BFLB_PINMUX_PULL_MODES_POS)  & BFLB_PINMUX_PULL_MODES_MASK)
#define BFLB_PINMUX_GET_DRIVER_STRENGTH(pincfg)				  \
	(((pincfg) >> BFLB_PINMUX_DRIVER_STRENGTH_POS)  & BFLB_PINMUX_DRIVER_STRENGTH_MASK)
#define BFLB_PINMUX_GET_SMT(pincfg)					  \
	(((pincfg) >> BFLB_PINMUX_SMT_POS)  & BFLB_PINMUX_SMT_MASK)

#endif  /* DT_BINDINGS_PINCTRL_BFLB_BL_H_ */
