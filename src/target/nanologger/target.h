#pragma once

#define STM32_GPIO_CONFIG \
{ \
    GPIO_CONFIG_PORT( /* PORTA */ \
        /* PA 0 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* ONEWIRE */ \
        /* PA 1 */ MODE_ANALOG, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* Battery ADC */ \
        /* PA 2 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_USART1_PA2, /* UART TX */ \
        /* PA 3 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_USART1_PA3, /* UART RX */ \
        /* PA 4 */ MODE_OUTPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* LED */ \
        /* PA 5 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_50MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI SCK */ \
        /* PA 6 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_50MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI MISO */ \
        /* PA 7 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_50MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI MOSI */ \
        /* PA 8 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PA 9 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C1_PA9, /* I2C SCL */ \
        /* PA10 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C1_PA10, /* I2C SDA */ \
        /* PA11 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PA12 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PA13 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_50MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* SWDIO */ \
        /* PA14 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_50MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* SWCLK */ \
        /* PA15 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
    ), \
}

#define PIN_SENSOR PIN_A0
#define PIN_SD_CS PIN_B1
#define PIN_LED PIN_A4
#define BATT_ADC_INPUT 1

#define MAX_SENSORS 5
#define MAX_BUFFER (1000 / (5 + MAX_SENSORS))

#define STACK_SIZE 1024

#define CORTEXM_SYSTICK_INTERVAL 100000
#define STM32_NO_PLL
#define STM32_SYS_CLOCK 8000000
#define STM32_AHB_CLOCK 8000000
#define STM32_APB1_CLOCK 8000000
#define STM32_APB2_CLOCK 8000000
#define STM32_ENABLE_SPI
#include "board/flexperiment/nano/target.h"
