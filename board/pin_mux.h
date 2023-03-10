/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT_CLKOE_0b0 0x00u /*!<@brief Bus Clock Output Enable: Bus clock output is disabled on PTH2. */

/*! @name PORTD2 (number 46), J9[9]
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Pulsante_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Pulsante_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Pulsante_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTE7 (number 5), D4[3]/LEDRGB_BLUE
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PTE7_BLUE_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_PTE7_BLUE_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PTE7_BLUE_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_PTE7_BLUE_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_PTE7_BLUE_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PTE7_BLUE_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PTE7_BLUE_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTH2 (number 6), D4[4]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PTH2_GREEN_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_PTH2_GREEN_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PTH2_GREEN_GPIO_PORT kGPIO_PORTH    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_PTH2_GREEN_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_PTH2_GREEN_PORT PORTH               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PTH2_GREEN_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PTH2_GREEN_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTH1 (number 14), D4[1]/LEDRGB_RED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PTH1_RED_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_PTH1_RED_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PTH1_RED_GPIO_PORT kGPIO_PORTH    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_PTH1_RED_GPIO_PIN_MASK (1U << 25U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_PTH1_RED_PORT PORTH               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PTH1_RED_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PTH1_RED_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTE3 (number 53), J9[7]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Button1_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Button1_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Button1_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Button1_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Button1_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Button1_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Button1_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PORTE2 (number 54), J9[5]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Button2_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Button2_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Button2_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Button2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Button2_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Button2_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Button2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PORTF1 (number 42), J9[11]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Led_1_Ora_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Led_1_Ora_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Led_1_Ora_GPIO_PORT kGPIO_PORTF    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Led_1_Ora_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Led_1_Ora_PORT PORTF               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Led_1_Ora_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Led_1_Ora_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTF0 (number 43), J9[13]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Led_2_Ora_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Led_2_Ora_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Led_2_Ora_GPIO_PORT kGPIO_PORTF    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Led_2_Ora_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Led_2_Ora_PORT PORTF               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Led_2_Ora_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Led_2_Ora_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTG3 (number 55), J9[15]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Led_3_Ora_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Led_3_Ora_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Led_3_Ora_GPIO_PORT kGPIO_PORTG    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Led_3_Ora_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Led_3_Ora_PORT PORTG               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Led_3_Ora_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Led_3_Ora_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTE1 (number 59), J9[3]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Led_Fredda_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Led_Fredda_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Led_Fredda_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Led_Fredda_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Led_Fredda_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Led_Fredda_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Led_Fredda_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTE0 (number 60), J9[1]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Led_Calda_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Led_Calda_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Led_Calda_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Led_Calda_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Led_Calda_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Led_Calda_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Led_Calda_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTF7 (number 27), J2[9]/J10[2]/PTF7_A0_ANA0
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Start_Fredda_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Start_Fredda_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Start_Fredda_GPIO_PORT kGPIO_PORTF    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITPINS_Start_Fredda_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Start_Fredda_PORT PORTF               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Start_Fredda_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Start_Fredda_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTC0 (number 26), J10[4]
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_Start_Calda_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITPINS_Start_Calda_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_Start_Calda_GPIO_PORT kGPIO_PORTC    /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITPINS_Start_Calda_GPIO_PIN_MASK (1U << 16U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITPINS_Start_Calda_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_Start_Calda_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_Start_Calda_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#define SOPT_CLKOE_0b0 0x00u /*!<@brief Bus Clock Output Enable: Bus clock output is disabled on PTH2. */

/*! @name PORTE7 (number 5), D4[3]/LEDRGB_BLUE
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_PTE7_BLUE_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTE7_BLUE_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTE7_BLUE_GPIO_PORT kGPIO_PORTE    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_PTE7_BLUE_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_PTE7_BLUE_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_PTE7_BLUE_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_PTE7_BLUE_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTH2 (number 6), D4[4]/LEDRGB_GREEN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_PTH2_GREEN_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH2_GREEN_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH2_GREEN_GPIO_PORT kGPIO_PORTH    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_PTH2_GREEN_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_PTH2_GREEN_PORT PORTH               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH2_GREEN_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_PTH2_GREEN_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTH1 (number 14), D4[1]/LEDRGB_RED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_PTH1_RED_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH1_RED_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH1_RED_GPIO_PORT kGPIO_PORTH    /*!<@brief PORTB GPIO port: PORTB */
#define BOARD_INITLEDSPINS_PTH1_RED_GPIO_PIN_MASK (1U << 25U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_PTH1_RED_PORT PORTH               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_PTH1_RED_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_PTH1_RED_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

/*! @name PORTD6 (number 23), J1[7]/PTD6_TSI/PTD6_RXD2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITTOUCHPINS_PTD6_TSI_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD6_TSI_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD6_TSI_GPIO_PORT kGPIO_PORTD    /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITTOUCHPINS_PTD6_TSI_GPIO_PIN_MASK (1U << 30U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITTOUCHPINS_PTD6_TSI_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD6_TSI_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITTOUCHPINS_PTD6_TSI_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTD7 (number 22), J1[5]/PTD7_TSI/PTD7_TXD2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITTOUCHPINS_PTD7_TSI_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD7_TSI_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD7_TSI_GPIO_PORT kGPIO_PORTD    /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITTOUCHPINS_PTD7_TSI_GPIO_PIN_MASK (1U << 31U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITTOUCHPINS_PTD7_TSI_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITTOUCHPINS_PTD7_TSI_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITTOUCHPINS_PTD7_TSI_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitTOUCHPins(void);

/*! @name PORTC6 (number 52), J1[3]/PTC6_RXD1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_RX_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*! @name PORTC7 (number 51), J1[1]/PTC7_TXD1
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART_TX_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTA3 (number 47), J2[20]/U1[4]/PTA3_ACCEL_SCL/PTA3_D15
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_SCL_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTA2 (number 48), J2[18]/U1[6]/PTA2_ACCEL_SDA/PTA2_D14
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_SDA_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PORTD4 (number 44), U1[11]/PTD4_ACCEL_INT1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCEL_INT1_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PORT kGPIO_PORTD    /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_INT1_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PORTD3 (number 45), U1[9]/PTD3_ACCEL_INT2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCEL_INT2_FGPIO FGPIOA             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PORT kGPIO_PORTD    /*!<@brief PORTA GPIO port: PORTA */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PIN_MASK (1U << 27U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_INT2_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                                /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void);

/*! @name PORTB7 (number 11), Y1[2]/EXTAL
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITOSCPINS_EXTAL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITOSCPINS_EXTAL_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITOSCPINS_EXTAL_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTB6 (number 12), Y1[1]/XTAL_Y
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_INITOSCPINS_XTAL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITOSCPINS_XTAL_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITOSCPINS_XTAL_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
