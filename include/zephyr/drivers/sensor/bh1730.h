/**
 * @file         bh1730.h
 *
 * @brief        Header file for extended sensor API of BH1730 ambient light sensor
 *
 * @details
 * Supported channels:
 * SENSOR_CHAN_LIGHT - light value in lux
 * SENSOR_CHAN_AMBIENT_LIGHT - visible light value
 * SENSOR_CHAN_IR - infrared light value
 *
 * Supported attributes:
 * SENSOR_ATTR_GAIN - val1 = 1, 2, 64 or 128
 * SENSOR_ATTR_BH1730_SENSOR_INTEGRATION_TIME - sensor integration time
 *
 * Copyright (c) 2026 Swarovski Optik AG & Co. KG, Absam, Austria
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_SENSOR_BH1730_H_
#define ZEPHYR_INCLUDE_DRIVERS_SENSOR_BH1730_H_

#include <zephyr/drivers/sensor.h>

/**
 * @brief Custom sensor attributes for BH1730
 */
enum sensor_attribute_bh1730 {
	/**
	 * Sensor integration time in ms
	 *
	 * 3 - 691ms
	 */
	SENSOR_ATTR_BH1730_SENSOR_INTEGRATION_TIME = SENSOR_ATTR_PRIV_START,
};

#endif /* ZEPHYR_INCLUDE_DRIVERS_SENSOR_BH1730_H_ */
