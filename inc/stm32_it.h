/**
 ******************************************************************************
 * @file    stm32_it.h
 * @author  Spark Application Team
 * @version V1.0.0
 * @date    13-March-2013
 * @brief   This file contains the headers of the interrupt handlers.
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32_IT_H
#define __STM32_IT_H

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void CC3000_SPI_TX_DMA_IRQHandler(void);
void CC3000_WIFI_INT_EXTI_IRQHandler(void);

#endif /* __STM32_IT_H */

