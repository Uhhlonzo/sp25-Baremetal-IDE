/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <inttypes.h>


#include "riscv.h"

#include "chip_config.h"
// #include "hal_conv.h"


/**
 * This section controls which peripheral device is included in the application program.
 * To save the memory space, the unused peripheral device can be commented out.
 */
// #include "hal_core.h"
// #include "hal_clint.h"
// #include "hal_gpio.h"
// #include "hal_i2c.h"
// #include "hal_plic.h"
// #include "hal_uart.h"

/* USER CODE END Includes */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */
// ------------------------------------------------------------
// Frequency configuration
// ------------------------------------------------------------

// Default single frequency
#ifndef TARGET_FREQUENCY_HZ
#define TARGET_FREQUENCY_HZ 100000000ULL
#endif

// Enable PLL sweep (0 = off, 1 = on)
#ifndef ENABLE_PLL_SWEEP
#define ENABLE_PLL_SWEEP 0
#endif

#ifndef PLL_SWEEP_SLEEP_MS
#define PLL_SWEEP_SLEEP_MS 2000
#endif

// Frequency list if sweep is enabled
#ifndef PLL_FREQ_LIST
#define PLL_FREQ_LIST \
  50000000ULL, \
  150000000ULL, \
  250000000ULL, \
  // 350000000ULL, \
  // 450000000ULL, \
  // 550000000ULL, \
  // 650000000ULL, \
  // 750000000ULL, \
  // 850000000ULL, \
  // 950000000ULL
#endif

/* USER CODE END Private defines */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
/* USER CODE BEGIN EFP */
void app_init();
void app_main();
/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
