/**
  ******************************************************************************
  * @file    stm32l5xx_hal.h
  * @author  MCD Application Team
  * @brief   This file contains all the functions prototypes for the HAL
  *          module driver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32L5xx_HAL_H
#define STM32L5xx_HAL_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l5xx_hal_conf.h"

/** @addtogroup STM32L5xx_HAL_Driver
  * @{
  */

/** @addtogroup HAL
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup HAL_Exported_Types HAL Exported Types
  * @{
  */

/** @defgroup HAL_TICK_FREQ Tick Frequency
  * @{
  */
typedef enum
{
  HAL_TICK_FREQ_10HZ         = 100U,
  HAL_TICK_FREQ_100HZ        = 10U,
  HAL_TICK_FREQ_1KHZ         = 1U,
  HAL_TICK_FREQ_DEFAULT      = HAL_TICK_FREQ_1KHZ
} HAL_TickFreqTypeDef;
/**
  * @}
  */

/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup HAL_Exported_Constants HAL Exported Constants
  * @{
  */

/** @defgroup SYSCFG_Exported_Constants SYSCFG Exported Constants
  * @{
  */

/** @defgroup SYSCFG_FPU_Interrupts FPU Interrupts
  * @{
  */
#define SYSCFG_IT_FPU_IOC              SYSCFG_FPUIMR_FPU_IE_0  /*!< Floating Point Unit Invalid operation Interrupt */
#define SYSCFG_IT_FPU_DZC              SYSCFG_FPUIMR_FPU_IE_1  /*!< Floating Point Unit Divide-by-zero Interrupt */
#define SYSCFG_IT_FPU_UFC              SYSCFG_FPUIMR_FPU_IE_2  /*!< Floating Point Unit Underflow Interrupt */
#define SYSCFG_IT_FPU_OFC              SYSCFG_FPUIMR_FPU_IE_3  /*!< Floating Point Unit Overflow Interrupt */
#define SYSCFG_IT_FPU_IDC              SYSCFG_FPUIMR_FPU_IE_4  /*!< Floating Point Unit Input denormal Interrupt */
#define SYSCFG_IT_FPU_IXC              SYSCFG_FPUIMR_FPU_IE_5  /*!< Floating Point Unit Inexact Interrupt */

/**
  * @}
  */

/** @defgroup SYSCFG_SRAM2WRP_0_31 SRAM2 Page Write protection (0 to 31)
  * @{
  */
#define SYSCFG_SRAM2WRP_PAGE0          SYSCFG_SWPR_P0WP /*!< SRAM2 Write protection page 0 */
#define SYSCFG_SRAM2WRP_PAGE1          SYSCFG_SWPR_P1WP /*!< SRAM2 Write protection page 1 */
#define SYSCFG_SRAM2WRP_PAGE2          SYSCFG_SWPR_P2WP /*!< SRAM2 Write protection page 2 */
#define SYSCFG_SRAM2WRP_PAGE3          SYSCFG_SWPR_P3WP /*!< SRAM2 Write protection page 3 */
#define SYSCFG_SRAM2WRP_PAGE4          SYSCFG_SWPR_P4WP /*!< SRAM2 Write protection page 4 */
#define SYSCFG_SRAM2WRP_PAGE5          SYSCFG_SWPR_P5WP /*!< SRAM2 Write protection page 5 */
#define SYSCFG_SRAM2WRP_PAGE6          SYSCFG_SWPR_P6WP /*!< SRAM2 Write protection page 6 */
#define SYSCFG_SRAM2WRP_PAGE7          SYSCFG_SWPR_P7WP /*!< SRAM2 Write protection page 7 */
#define SYSCFG_SRAM2WRP_PAGE8          SYSCFG_SWPR_P8WP /*!< SRAM2 Write protection page 8 */
#define SYSCFG_SRAM2WRP_PAGE9          SYSCFG_SWPR_P9WP /*!< SRAM2 Write protection page 9 */
#define SYSCFG_SRAM2WRP_PAGE10         SYSCFG_SWPR_P10WP /*!< SRAM2 Write protection page 10 */
#define SYSCFG_SRAM2WRP_PAGE11         SYSCFG_SWPR_P11WP /*!< SRAM2 Write protection page 11 */
#define SYSCFG_SRAM2WRP_PAGE12         SYSCFG_SWPR_P12WP /*!< SRAM2 Write protection page 12 */
#define SYSCFG_SRAM2WRP_PAGE13         SYSCFG_SWPR_P13WP /*!< SRAM2 Write protection page 13 */
#define SYSCFG_SRAM2WRP_PAGE14         SYSCFG_SWPR_P14WP /*!< SRAM2 Write protection page 14 */
#define SYSCFG_SRAM2WRP_PAGE15         SYSCFG_SWPR_P15WP /*!< SRAM2 Write protection page 15 */
#define SYSCFG_SRAM2WRP_PAGE16         SYSCFG_SWPR_P16WP /*!< SRAM2 Write protection page 16 */
#define SYSCFG_SRAM2WRP_PAGE17         SYSCFG_SWPR_P17WP /*!< SRAM2 Write protection page 17 */
#define SYSCFG_SRAM2WRP_PAGE18         SYSCFG_SWPR_P18WP /*!< SRAM2 Write protection page 18 */
#define SYSCFG_SRAM2WRP_PAGE19         SYSCFG_SWPR_P19WP /*!< SRAM2 Write protection page 19 */
#define SYSCFG_SRAM2WRP_PAGE20         SYSCFG_SWPR_P20WP /*!< SRAM2 Write protection page 20 */
#define SYSCFG_SRAM2WRP_PAGE21         SYSCFG_SWPR_P21WP /*!< SRAM2 Write protection page 21 */
#define SYSCFG_SRAM2WRP_PAGE22         SYSCFG_SWPR_P22WP /*!< SRAM2 Write protection page 22 */
#define SYSCFG_SRAM2WRP_PAGE23         SYSCFG_SWPR_P23WP /*!< SRAM2 Write protection page 23 */
#define SYSCFG_SRAM2WRP_PAGE24         SYSCFG_SWPR_P24WP /*!< SRAM2 Write protection page 24 */
#define SYSCFG_SRAM2WRP_PAGE25         SYSCFG_SWPR_P25WP /*!< SRAM2 Write protection page 25 */
#define SYSCFG_SRAM2WRP_PAGE26         SYSCFG_SWPR_P26WP /*!< SRAM2 Write protection page 26 */
#define SYSCFG_SRAM2WRP_PAGE27         SYSCFG_SWPR_P27WP /*!< SRAM2 Write protection page 27 */
#define SYSCFG_SRAM2WRP_PAGE28         SYSCFG_SWPR_P28WP /*!< SRAM2 Write protection page 28 */
#define SYSCFG_SRAM2WRP_PAGE29         SYSCFG_SWPR_P29WP /*!< SRAM2 Write protection page 29 */
#define SYSCFG_SRAM2WRP_PAGE30         SYSCFG_SWPR_P30WP /*!< SRAM2 Write protection page 30 */
#define SYSCFG_SRAM2WRP_PAGE31         SYSCFG_SWPR_P31WP /*!< SRAM2 Write protection page 31 */
/**
  * @}
  */

/** @defgroup SYSCFG_SRAM2WRP_32_63 SRAM2 Page Write protection (32 to 63)
  * @{
  */
#define SYSCFG_SRAM2WRP_PAGE32         SYSCFG_SWPR2_P32WP /*!< SRAM2 Write protection page 32 */
#define SYSCFG_SRAM2WRP_PAGE33         SYSCFG_SWPR2_P33WP /*!< SRAM2 Write protection page 33 */
#define SYSCFG_SRAM2WRP_PAGE34         SYSCFG_SWPR2_P34WP /*!< SRAM2 Write protection page 34 */
#define SYSCFG_SRAM2WRP_PAGE35         SYSCFG_SWPR2_P35WP /*!< SRAM2 Write protection page 35 */
#define SYSCFG_SRAM2WRP_PAGE36         SYSCFG_SWPR2_P36WP /*!< SRAM2 Write protection page 36 */
#define SYSCFG_SRAM2WRP_PAGE37         SYSCFG_SWPR2_P37WP /*!< SRAM2 Write protection page 37 */
#define SYSCFG_SRAM2WRP_PAGE38         SYSCFG_SWPR2_P38WP /*!< SRAM2 Write protection page 38 */
#define SYSCFG_SRAM2WRP_PAGE39         SYSCFG_SWPR2_P39WP /*!< SRAM2 Write protection page 39 */
#define SYSCFG_SRAM2WRP_PAGE40         SYSCFG_SWPR2_P40WP /*!< SRAM2 Write protection page 40 */
#define SYSCFG_SRAM2WRP_PAGE41         SYSCFG_SWPR2_P41WP /*!< SRAM2 Write protection page 41 */
#define SYSCFG_SRAM2WRP_PAGE42         SYSCFG_SWPR2_P42WP /*!< SRAM2 Write protection page 42 */
#define SYSCFG_SRAM2WRP_PAGE43         SYSCFG_SWPR2_P43WP /*!< SRAM2 Write protection page 43 */
#define SYSCFG_SRAM2WRP_PAGE44         SYSCFG_SWPR2_P44WP /*!< SRAM2 Write protection page 44 */
#define SYSCFG_SRAM2WRP_PAGE45         SYSCFG_SWPR2_P45WP /*!< SRAM2 Write protection page 45 */
#define SYSCFG_SRAM2WRP_PAGE46         SYSCFG_SWPR2_P46WP /*!< SRAM2 Write protection page 46 */
#define SYSCFG_SRAM2WRP_PAGE47         SYSCFG_SWPR2_P47WP /*!< SRAM2 Write protection page 47 */
#define SYSCFG_SRAM2WRP_PAGE48         SYSCFG_SWPR2_P48WP /*!< SRAM2 Write protection page 48 */
#define SYSCFG_SRAM2WRP_PAGE49         SYSCFG_SWPR2_P49WP /*!< SRAM2 Write protection page 49 */
#define SYSCFG_SRAM2WRP_PAGE50         SYSCFG_SWPR2_P50WP /*!< SRAM2 Write protection page 50 */
#define SYSCFG_SRAM2WRP_PAGE51         SYSCFG_SWPR2_P51WP /*!< SRAM2 Write protection page 51 */
#define SYSCFG_SRAM2WRP_PAGE52         SYSCFG_SWPR2_P52WP /*!< SRAM2 Write protection page 52 */
#define SYSCFG_SRAM2WRP_PAGE53         SYSCFG_SWPR2_P53WP /*!< SRAM2 Write protection page 53 */
#define SYSCFG_SRAM2WRP_PAGE54         SYSCFG_SWPR2_P54WP /*!< SRAM2 Write protection page 54 */
#define SYSCFG_SRAM2WRP_PAGE55         SYSCFG_SWPR2_P55WP /*!< SRAM2 Write protection page 55 */
#define SYSCFG_SRAM2WRP_PAGE56         SYSCFG_SWPR2_P56WP /*!< SRAM2 Write protection page 56 */
#define SYSCFG_SRAM2WRP_PAGE57         SYSCFG_SWPR2_P57WP /*!< SRAM2 Write protection page 57 */
#define SYSCFG_SRAM2WRP_PAGE58         SYSCFG_SWPR2_P58WP /*!< SRAM2 Write protection page 58 */
#define SYSCFG_SRAM2WRP_PAGE59         SYSCFG_SWPR2_P59WP /*!< SRAM2 Write protection page 59 */
#define SYSCFG_SRAM2WRP_PAGE60         SYSCFG_SWPR2_P60WP /*!< SRAM2 Write protection page 60 */
#define SYSCFG_SRAM2WRP_PAGE61         SYSCFG_SWPR2_P61WP /*!< SRAM2 Write protection page 61 */
#define SYSCFG_SRAM2WRP_PAGE62         SYSCFG_SWPR2_P62WP /*!< SRAM2 Write protection page 62 */
#define SYSCFG_SRAM2WRP_PAGE63         SYSCFG_SWPR2_P63WP /*!< SRAM2 Write protection page 63 */
/**
  * @}
  */

/** @defgroup SYSCFG_VREFBUF_VoltageScale VREFBUF Voltage Scale
  * @{
  */
#define SYSCFG_VREFBUF_VOLTAGE_SCALE0  0U              /*!< Voltage reference scale 0 (VREF_OUT1) */
#define SYSCFG_VREFBUF_VOLTAGE_SCALE1  VREFBUF_CSR_VRS /*!< Voltage reference scale 1 (VREF_OUT2) */

/**
  * @}
  */

/** @defgroup SYSCFG_VREFBUF_HighImpedance VREFBUF High Impedance
  * @{
  */
#define SYSCFG_VREFBUF_HIGH_IMPEDANCE_DISABLE  0U              /*!< VREF_plus pin is internally connected to Voltage reference buffer output */
#define SYSCFG_VREFBUF_HIGH_IMPEDANCE_ENABLE   VREFBUF_CSR_HIZ /*!< VREF_plus pin is high impedance */

/**
  * @}
  */

/** @defgroup SYSCFG_flags_definition Flags
  * @{
  */

#define SYSCFG_FLAG_SRAM2_PE            SYSCFG_CFGR2_SPF       /*!< SRAM2 parity error */
#define SYSCFG_FLAG_SRAM2_BUSY          SYSCFG_SCSR_SRAM2BSY   /*!< SRAM2 busy by erase operation */

/**
  * @}
  */

/** @defgroup SYSCFG_FastModePlus_GPIO Fast-mode Plus on GPIO
  * @{
  */

/** @brief  Fast-mode Plus driving capability on a specific GPIO
  */
#define SYSCFG_FASTMODEPLUS_PB6        SYSCFG_CFGR1_I2C_PB6_FMP  /*!< Enable Fast-mode Plus on PB6 */
#define SYSCFG_FASTMODEPLUS_PB7        SYSCFG_CFGR1_I2C_PB7_FMP  /*!< Enable Fast-mode Plus on PB7 */
#define SYSCFG_FASTMODEPLUS_PB8        SYSCFG_CFGR1_I2C_PB8_FMP  /*!< Enable Fast-mode Plus on PB8 */
#define SYSCFG_FASTMODEPLUS_PB9        SYSCFG_CFGR1_I2C_PB9_FMP  /*!< Enable Fast-mode Plus on PB9 */

/**
 * @}
 */

/** @defgroup SYSCFG_Lock_items SYSCFG Lock items
  * @brief SYSCFG items to set lock on
  * @{
  */
#define SYSCFG_MPU_NSEC                SYSCFG_CNSLCKR_LOCKNSMPU            /*!< Non-secure MPU lock (privileged secure or non-secure only) */
#define SYSCFG_VTOR_NSEC               SYSCFG_CNSLCKR_LOCKNSVTOR           /*!< Non-secure VTOR lock (privileged secure or non-secure only) */
#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
#define SYSCFG_SAU                     (SYSCFG_CSLCKR_LOCKSAU << 16U)      /*!< SAU lock (privileged secure code only) */
#define SYSCFG_MPU_SEC                 (SYSCFG_CSLCKR_LOCKSMPU << 16U)     /*!< Secure MPU lock (privileged secure code only) */
#define SYSCFG_VTOR_AIRCR_SEC          (SYSCFG_CSLCKR_LOCKSVTAIRCR << 16U) /*!< VTOR_S and AIRCR lock (privileged secure code only) */
#define SYSCFG_LOCK_ALL                (SYSCFG_MPU_NSEC|SYSCFG_VTOR_NSEC|SYSCFG_SAU|SYSCFG_MPU_SEC|SYSCFG_VTOR_AIRCR_SEC)  /*!< All */
#else
#define SYSCFG_LOCK_ALL                (SYSCFG_MPU_NSEC|SYSCFG_VTOR_NSEC)  /*!< All (privileged secure or non-secure only) */
#endif /* __ARM_FEATURE_CMSE */
/**
  * @}
  */

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

/** @defgroup SYSCFG_Attributes_items SYSCFG Attributes items
  * @brief SYSCFG items to configure secure or non-secure attributes on
  * @{
  */
#define SYSCFG_CLK                     SYSCFG_SECCFGR_SYSCFGSEC   /*!< SYSCFG clock control */
#define SYSCFG_CLASSB                  SYSCFG_SECCFGR_CLASSBSEC   /*!< Class B */
#define SYSCFG_SRAM2                   SYSCFG_SECCFGR_SRAM2SEC    /*!< SRAM2 */
#define SYSCFG_FPU                     SYSCFG_SECCFGR_FPUSEC      /*!< FPU */
#define SYSCFG_ALL                     (SYSCFG_CLK | SYSCFG_CLASSB | SYSCFG_SRAM2 | SYSCFG_FPU) /*!< All */
/**
  * @}
  */

/** @defgroup SYSCFG_attributes SYSCFG attributes
  * @brief SYSCFG secure or non-secure attributes
  * @{
  */
#define SYSCFG_SEC                     0x00000001U   /*!< Secure attribute      */
#define SYSCFG_NSEC                    0x00000000U   /*!< Non-secure attribute  */
/**
  * @}
  */

#endif /* __ARM_FEATURE_CMSE */

/**
  * @}
  */

/**
  * @}
  */

/* Exported macros -----------------------------------------------------------*/
/** @defgroup HAL_Exported_Macros HAL Exported Macros
  * @{
  */

/** @defgroup DBGMCU_Exported_Macros DBGMCU Exported Macros
  * @{
  */

/** @brief  Freeze/Unfreeze Peripherals in Debug mode
  */
#if defined(DBGMCU_APB1FZR1_DBG_TIM2_STOP)
#define __HAL_DBGMCU_FREEZE_TIM2()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM2_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM2()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM2_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_TIM3_STOP)
#define __HAL_DBGMCU_FREEZE_TIM3()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM3_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM3()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM3_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_TIM4_STOP)
#define __HAL_DBGMCU_FREEZE_TIM4()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM4_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM4()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM4_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_TIM5_STOP)
#define __HAL_DBGMCU_FREEZE_TIM5()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM5_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM5()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM5_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_TIM6_STOP)
#define __HAL_DBGMCU_FREEZE_TIM6()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM6_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM6()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM6_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_TIM7_STOP)
#define __HAL_DBGMCU_FREEZE_TIM7()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM7_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM7()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_TIM7_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_RTC_STOP)
#define __HAL_DBGMCU_FREEZE_RTC()            SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_RTC_STOP)
#define __HAL_DBGMCU_UNFREEZE_RTC()          CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_RTC_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_WWDG_STOP)
#define __HAL_DBGMCU_FREEZE_WWDG()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_WWDG_STOP)
#define __HAL_DBGMCU_UNFREEZE_WWDG()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_WWDG_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_IWDG_STOP)
#define __HAL_DBGMCU_FREEZE_IWDG()           SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_IWDG_STOP)
#define __HAL_DBGMCU_UNFREEZE_IWDG()         CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_IWDG_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_I2C1_STOP)
#define __HAL_DBGMCU_FREEZE_I2C1_TIMEOUT()   SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C1_STOP)
#define __HAL_DBGMCU_UNFREEZE_I2C1_TIMEOUT() CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C1_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_I2C2_STOP)
#define __HAL_DBGMCU_FREEZE_I2C2_TIMEOUT()   SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C2_STOP)
#define __HAL_DBGMCU_UNFREEZE_I2C2_TIMEOUT() CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C2_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_I2C3_STOP)
#define __HAL_DBGMCU_FREEZE_I2C3_TIMEOUT()   SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C3_STOP)
#define __HAL_DBGMCU_UNFREEZE_I2C3_TIMEOUT() CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_I2C3_STOP)
#endif

#if defined(DBGMCU_APB1FZR2_DBG_I2C4_STOP)
#define __HAL_DBGMCU_FREEZE_I2C4_TIMEOUT()   SET_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_I2C4_STOP)
#define __HAL_DBGMCU_UNFREEZE_I2C4_TIMEOUT() CLEAR_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_I2C4_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_FDCAN1_STOP)
#define __HAL_DBGMCU_FREEZE_FDCAN1()         SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_FDCAN1_STOP)
#define __HAL_DBGMCU_UNFREEZE_FDCAN1()       CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_FDCAN1_STOP)
#endif

#if defined(DBGMCU_APB1FZR1_DBG_LPTIM1_STOP)
#define __HAL_DBGMCU_FREEZE_LPTIM1()         SET_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_LPTIM1_STOP)
#define __HAL_DBGMCU_UNFREEZE_LPTIM1()       CLEAR_BIT(DBGMCU->APB1FZR1, DBGMCU_APB1FZR1_DBG_LPTIM1_STOP)
#endif

#if defined(DBGMCU_APB1FZR2_DBG_LPTIM2_STOP)
#define __HAL_DBGMCU_FREEZE_LPTIM2()         SET_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_LPTIM2_STOP)
#define __HAL_DBGMCU_UNFREEZE_LPTIM2()       CLEAR_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_LPTIM2_STOP)
#endif

#if defined(DBGMCU_APB1FZR2_DBG_LPTIM3_STOP)
#define __HAL_DBGMCU_FREEZE_LPTIM3()         SET_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_LPTIM3_STOP)
#define __HAL_DBGMCU_UNFREEZE_LPTIM3()       CLEAR_BIT(DBGMCU->APB1FZR2, DBGMCU_APB1FZR2_DBG_LPTIM3_STOP)
#endif

#if defined(DBGMCU_APB2FZR_DBG_TIM1_STOP)
#define __HAL_DBGMCU_FREEZE_TIM1()           SET_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM1_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM1()         CLEAR_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM1_STOP)
#endif

#if defined(DBGMCU_APB2FZR_DBG_TIM8_STOP)
#define __HAL_DBGMCU_FREEZE_TIM8()           SET_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM8_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM8()         CLEAR_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM8_STOP)
#endif

#if defined(DBGMCU_APB2FZR_DBG_TIM15_STOP)
#define __HAL_DBGMCU_FREEZE_TIM15()          SET_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM15_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM15()        CLEAR_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM15_STOP)
#endif

#if defined(DBGMCU_APB2FZR_DBG_TIM16_STOP)
#define __HAL_DBGMCU_FREEZE_TIM16()          SET_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM16_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM16()        CLEAR_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM16_STOP)
#endif

#if defined(DBGMCU_APB2FZR_DBG_TIM17_STOP)
#define __HAL_DBGMCU_FREEZE_TIM17()          SET_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM17_STOP)
#define __HAL_DBGMCU_UNFREEZE_TIM17()        CLEAR_BIT(DBGMCU->APB2FZR, DBGMCU_APB2FZR_DBG_TIM17_STOP)
#endif

/**
  * @}
  */

/** @defgroup SYSCFG_Exported_Macros SYSCFG Exported Macros
  * @{
  */

/** @brief  SRAM2 page 0 to 31 write protection enable macro
  * @param  __SRAM2WRP__  This parameter can be a combination of values of @ref SYSCFG_SRAM2WRP_0_31
  * @note   Write protection can only be disabled by a system reset
  */
#define __HAL_SYSCFG_SRAM2_WRP_0_31_ENABLE(__SRAM2WRP__)    do {assert_param(IS_SYSCFG_SRAM2WRP_PAGE((__SRAM2WRP__)));\
                                                                SET_BIT(SYSCFG->SWPR, (__SRAM2WRP__));\
                                                            }while(0)

/** @brief  SRAM2 page 32 to 63 write protection enable macro
  * @param  __SRAM2WRP__  This parameter can be a combination of values of @ref SYSCFG_SRAM2WRP_32_63
  * @note   Write protection can only be disabled by a system reset
  */
#define __HAL_SYSCFG_SRAM2_WRP_32_63_ENABLE(__SRAM2WRP__)   do {assert_param(IS_SYSCFG_SRAM2WRP_PAGE((__SRAM2WRP__)));\
                                                                SET_BIT(SYSCFG->SWPR2, (__SRAM2WRP__));\
                                                            }while(0)

/** @brief  SRAM2 page write protection unlock prior to erase
  * @note   Writing a wrong key reactivates the write protection
  */
#define __HAL_SYSCFG_SRAM2_WRP_UNLOCK()      do {SYSCFG->SKR = 0xCA;\
                                                 SYSCFG->SKR = 0x53;\
                                                }while(0)

/** @brief  SRAM2 erase
  * @note   __SYSCFG_GET_FLAG(SYSCFG_FLAG_SRAM2_BUSY) may be used to check end of erase
  */
#define __HAL_SYSCFG_SRAM2_ERASE()           SET_BIT(SYSCFG->SCSR, SYSCFG_SCSR_SRAM2ER)

/** @brief  Floating Point Unit interrupt enable/disable macros
  * @param __INTERRUPT__  This parameter can be a value of @ref SYSCFG_FPU_Interrupts
  */
#define __HAL_SYSCFG_FPU_INTERRUPT_ENABLE(__INTERRUPT__)    do {assert_param(IS_SYSCFG_FPU_INTERRUPT((__INTERRUPT__)));\
                                                                SET_BIT(SYSCFG->FPUIMR, (__INTERRUPT__));\
                                                            }while(0)

#define __HAL_SYSCFG_FPU_INTERRUPT_DISABLE(__INTERRUPT__)   do {assert_param(IS_SYSCFG_FPU_INTERRUPT((__INTERRUPT__)));\
                                                                CLEAR_BIT(SYSCFG->FPUIMR, (__INTERRUPT__));\
                                                            }while(0)

/** @brief  SYSCFG Break ECC lock.
  *         Enable and lock the connection of Flash ECC error connection to TIM1/8/15/16/17 Break input.
  * @note   The selected configuration is locked and can be unlocked only by system reset.
  */
#define __HAL_SYSCFG_BREAK_ECC_LOCK()        SET_BIT(SYSCFG->CFGR2, SYSCFG_CFGR2_ECCL)

/** @brief  SYSCFG Break Cortex-M33 Lockup lock.
  *         Enable and lock the connection of Cortex-M33 LOCKUP (Hardfault) output to TIM1/8/15/16/17 Break input.
  * @note   The selected configuration is locked and can be unlocked only by system reset.
  */
#define __HAL_SYSCFG_BREAK_LOCKUP_LOCK()     SET_BIT(SYSCFG->CFGR2, SYSCFG_CFGR2_CLL)

/** @brief  SYSCFG Break PVD lock.
  *         Enable and lock the PVD connection to Timer1/8/15/16/17 Break input, as well as the PVDE and PLS[2:0] in the PWR_CR2 register.
  * @note   The selected configuration is locked and can be unlocked only by system reset.
  */
#define __HAL_SYSCFG_BREAK_PVD_LOCK()        SET_BIT(SYSCFG->CFGR2, SYSCFG_CFGR2_PVDL)

/** @brief  SYSCFG Break SRAM2 parity lock.
  *         Enable and lock the SRAM2 parity error signal connection to TIM1/8/15/16/17 Break input.
  * @note   The selected configuration is locked and can be unlocked by system reset.
  */
#define __HAL_SYSCFG_BREAK_SRAM2PARITY_LOCK()  SET_BIT(SYSCFG->CFGR2, SYSCFG_CFGR2_SPL)

/** @brief  Check SYSCFG flag is set or not.
  * @param  __FLAG__  specifies the flag to check.
  *         This parameter can be one of the following values:
  *            @arg @ref SYSCFG_FLAG_SRAM2_PE   SRAM2 Parity Error Flag
  *            @arg @ref SYSCFG_FLAG_SRAM2_BUSY SRAM2 Erase Ongoing
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_SYSCFG_GET_FLAG(__FLAG__)      ((((((__FLAG__) == SYSCFG_SCSR_SRAM2BSY)? SYSCFG->SCSR : SYSCFG->CFGR2) & (__FLAG__))!= 0U) ? 1U : 0U)

/** @brief  Set the SPF bit to clear the SRAM Parity Error Flag.
  */
#define __HAL_SYSCFG_CLEAR_FLAG()            SET_BIT(SYSCFG->CFGR2, SYSCFG_CFGR2_SPF)

/** @brief  Fast-mode Plus driving capability enable/disable macros
  * @param __FASTMODEPLUS__  This parameter can be a value of :
  *     @arg @ref SYSCFG_FASTMODEPLUS_PB6 Fast-mode Plus driving capability activation on PB6
  *     @arg @ref SYSCFG_FASTMODEPLUS_PB7 Fast-mode Plus driving capability activation on PB7
  *     @arg @ref SYSCFG_FASTMODEPLUS_PB8 Fast-mode Plus driving capability activation on PB8
  *     @arg @ref SYSCFG_FASTMODEPLUS_PB9 Fast-mode Plus driving capability activation on PB9
  */
#define __HAL_SYSCFG_FASTMODEPLUS_ENABLE(__FASTMODEPLUS__)  do {assert_param(IS_SYSCFG_FASTMODEPLUS((__FASTMODEPLUS__)));\
                                                                SET_BIT(SYSCFG->CFGR1, (__FASTMODEPLUS__));\
                                                               }while(0)

#define __HAL_SYSCFG_FASTMODEPLUS_DISABLE(__FASTMODEPLUS__) do {assert_param(IS_SYSCFG_FASTMODEPLUS((__FASTMODEPLUS__)));\
                                                                CLEAR_BIT(SYSCFG->CFGR1, (__FASTMODEPLUS__));\
                                                               }while(0)

/**
  * @}
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup HAL_Private_Macros HAL Private Macros
  * @{
  */

/** @defgroup SYSCFG_Private_Macros SYSCFG Private Macros
  * @{
  */

#define IS_SYSCFG_FPU_INTERRUPT(__INTERRUPT__) ((((__INTERRUPT__) & SYSCFG_IT_FPU_IOC) == SYSCFG_IT_FPU_IOC) || \
                                                (((__INTERRUPT__) & SYSCFG_IT_FPU_DZC) == SYSCFG_IT_FPU_DZC) || \
                                                (((__INTERRUPT__) & SYSCFG_IT_FPU_UFC) == SYSCFG_IT_FPU_UFC) || \
                                                (((__INTERRUPT__) & SYSCFG_IT_FPU_OFC) == SYSCFG_IT_FPU_OFC) || \
                                                (((__INTERRUPT__) & SYSCFG_IT_FPU_IDC) == SYSCFG_IT_FPU_IDC) || \
                                                (((__INTERRUPT__) & SYSCFG_IT_FPU_IXC) == SYSCFG_IT_FPU_IXC))

#define IS_SYSCFG_BREAK_CONFIG(__CONFIG__) (((__CONFIG__) == SYSCFG_BREAK_ECC)           || \
                                            ((__CONFIG__) == SYSCFG_BREAK_PVD)           || \
                                            ((__CONFIG__) == SYSCFG_BREAK_SRAM2_PARITY)  || \
                                            ((__CONFIG__) == SYSCFG_BREAK_LOCKUP))

#define IS_SYSCFG_SRAM2WRP_PAGE(__PAGE__)   (((__PAGE__) > 0U) && ((__PAGE__) <= 0xFFFFFFFFUL))

#define IS_SYSCFG_VREFBUF_VOLTAGE_SCALE(__SCALE__)  (((__SCALE__) == SYSCFG_VREFBUF_VOLTAGE_SCALE0) || \
                                                     ((__SCALE__) == SYSCFG_VREFBUF_VOLTAGE_SCALE1))

#define IS_SYSCFG_VREFBUF_HIGH_IMPEDANCE(__VALUE__)  (((__VALUE__) == SYSCFG_VREFBUF_HIGH_IMPEDANCE_DISABLE) || \
                                                      ((__VALUE__) == SYSCFG_VREFBUF_HIGH_IMPEDANCE_ENABLE))

#define IS_SYSCFG_VREFBUF_TRIMMING(__VALUE__)  (((__VALUE__) > 0U) && ((__VALUE__) <= VREFBUF_CCR_TRIM))

#define IS_SYSCFG_FASTMODEPLUS(__PIN__) ((((__PIN__) & SYSCFG_FASTMODEPLUS_PB6) == SYSCFG_FASTMODEPLUS_PB6) || \
                                         (((__PIN__) & SYSCFG_FASTMODEPLUS_PB7) == SYSCFG_FASTMODEPLUS_PB7) || \
                                         (((__PIN__) & SYSCFG_FASTMODEPLUS_PB8) == SYSCFG_FASTMODEPLUS_PB8) || \
                                         (((__PIN__) & SYSCFG_FASTMODEPLUS_PB9) == SYSCFG_FASTMODEPLUS_PB9))


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

#define IS_SYSCFG_ATTRIBUTES(__ATTRIBUTES__) (((__ATTRIBUTES__) == SYSCFG_SEC)  ||\
                                              ((__ATTRIBUTES__) == SYSCFG_NSEC))

#define IS_SYSCFG_ITEMS_ATTRIBUTES(__ITEM__) ((((__ITEM__) & SYSCFG_CLK)   == SYSCFG_CLK)    || \
                                              (((__ITEM__) & SYSCFG_CLK)   == SYSCFG_CLASSB) || \
                                              (((__ITEM__) & SYSCFG_SRAM2) == SYSCFG_SRAM2)  || \
                                              (((__ITEM__) & SYSCFG_FPU)   == SYSCFG_CLK)    || \
                                              (((__ITEM__) & ~(SYSCFG_ALL)) == 0U))

#define IS_SYSCFG_LOCK_ITEMS(__ITEM__) ((((__ITEM__) & SYSCFG_MPU_NSEC)       == SYSCFG_MPU_NSEC)       || \
                                        (((__ITEM__) & SYSCFG_VTOR_NSEC)      == SYSCFG_VTOR_NSEC)      || \
                                        (((__ITEM__) & SYSCFG_SAU)            == SYSCFG_SAU)            || \
                                        (((__ITEM__) & SYSCFG_MPU_SEC)        == SYSCFG_MPU_SEC)        || \
                                        (((__ITEM__) & SYSCFG_VTOR_AIRCR_SEC) == SYSCFG_VTOR_AIRCR_SEC) || \
                                        (((__ITEM__) & ~(SYSCFG_LOCK_ALL)) == 0U))

#else

#define IS_SYSCFG_LOCK_ITEMS(__ITEM__) ((((__ITEM__) & SYSCFG_MPU_NSEC)  == SYSCFG_MPU_NSEC)    || \
                                        (((__ITEM__) & SYSCFG_VTOR_NSEC) == SYSCFG_VTOR_NSEC)   || \
                                        (((__ITEM__) & ~(SYSCFG_LOCK_ALL)) == 0U))


#endif /* __ARM_FEATURE_CMSE */

/**
  * @}
  */

/**
  * @}
  */

/* Exported variables --------------------------------------------------------*/

/** @addtogroup HAL_Exported_Variables
  * @{
  */
extern __IO uint32_t uwTick;
extern uint32_t uwTickPrio;
extern HAL_TickFreqTypeDef uwTickFreq;
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/

/** @addtogroup HAL_Exported_Functions
  * @{
  */

/** @addtogroup HAL_Exported_Functions_Group1
  * @{
  */

/* Initialization and de-initialization functions  ******************************/
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void              HAL_MspInit(void);
void              HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick (uint32_t TickPriority);

/**
  * @}
  */

/** @addtogroup HAL_Exported_Functions_Group2
  * @{
  */

/* Peripheral Control functions  ************************************************/
void               HAL_IncTick(void);
void               HAL_Delay(uint32_t Delay);
uint32_t           HAL_GetTick(void);
uint32_t           HAL_GetTickPrio(void);
HAL_StatusTypeDef  HAL_SetTickFreq(HAL_TickFreqTypeDef Freq);
HAL_TickFreqTypeDef HAL_GetTickFreq(void);
void               HAL_SuspendTick(void);
void               HAL_ResumeTick(void);
uint32_t           HAL_GetHalVersion(void);
uint32_t           HAL_GetREVID(void);
uint32_t           HAL_GetDEVID(void);
uint32_t           HAL_GetUIDw0(void);
uint32_t           HAL_GetUIDw1(void);
uint32_t           HAL_GetUIDw2(void);

/**
  * @}
  */

/** @addtogroup HAL_Exported_Functions_Group3
  * @{
  */

/* DBGMCU Peripheral Control functions  *****************************************/
void              HAL_DBGMCU_EnableDBGStopMode(void);
void              HAL_DBGMCU_DisableDBGStopMode(void);
void              HAL_DBGMCU_EnableDBGStandbyMode(void);
void              HAL_DBGMCU_DisableDBGStandbyMode(void);

/**
  * @}
  */

/** @addtogroup HAL_Exported_Functions_Group4
  * @{
  */

/* SYSCFG Control functions  ****************************************************/
void              HAL_SYSCFG_SRAM2Erase(void);

void              HAL_SYSCFG_VREFBUF_VoltageScalingConfig(uint32_t VoltageScaling);
void              HAL_SYSCFG_VREFBUF_HighImpedanceConfig(uint32_t Mode);
void              HAL_SYSCFG_VREFBUF_TrimmingConfig(uint32_t TrimmingValue);
HAL_StatusTypeDef HAL_SYSCFG_EnableVREFBUF(void);
void              HAL_SYSCFG_DisableVREFBUF(void);

void              HAL_SYSCFG_EnableIOAnalogBooster(void);
void              HAL_SYSCFG_DisableIOAnalogBooster(void);
void              HAL_SYSCFG_EnableIOAnalogSwitchVdd(void);
void              HAL_SYSCFG_DisableIOAnalogSwitchVdd(void);

/**
  * @}
  */

/** @addtogroup HAL_Exported_Functions_Group5
  * @{
  */

/* SYSCFG Lock functions ********************************************/
void              HAL_SYSCFG_Lock(uint32_t Item);
HAL_StatusTypeDef HAL_SYSCFG_GetLock(uint32_t *pItem);

/**
  * @}
  */

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

/** @addtogroup HAL_Exported_Functions_Group6
  * @{
  */

/* SYSCFG Attributes functions ********************************************/
void              HAL_SYSCFG_ConfigAttributes(uint32_t Item, uint32_t Attributes);
HAL_StatusTypeDef HAL_SYSCFG_GetConfigAttributes(uint32_t Item, uint32_t *pAttributes);

/**
  * @}
  */

#endif /* __ARM_FEATURE_CMSE */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32L5xx_HAL_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/