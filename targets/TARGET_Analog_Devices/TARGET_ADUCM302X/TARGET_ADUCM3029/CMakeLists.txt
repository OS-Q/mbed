# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

if(${MBED_TOOLCHAIN} STREQUAL "ARM")
    set(LINKER_FILE TOOLCHAIN_ARM_STD/ADuCM3029.sct)
elseif(${MBED_TOOLCHAIN} STREQUAL "GCC_ARM")
    set(LINKER_FILE TOOLCHAIN_GCC_ARM/ADuCM3029.ld)
endif()

if ("EV_COG_AD3029LZ" IN_LIST MBED_TARGET_LABELS)
    target_include_directories(mbed-core
        INTERFACE
            TARGET_EV_COG_AD3029LZ
            TARGET_EV_COG_AD3029LZ/device
    )

    target_sources(mbed-core
        INTERFACE
            TARGET_EV_COG_AD3029LZ/device/system_ADuCM3029.c
            TARGET_EV_COG_AD3029LZ/device/startup_ADuCM3029.c
    )

set_property(GLOBAL PROPERTY MBED_TARGET_LINKER_FILE ${CMAKE_CURRENT_SOURCE_DIR}/${LINKER_FILE})

target_include_directories(mbed-core
    INTERFACE
        api
        bsp
        bsp/adc
        bsp/beep
        bsp/config
        bsp/crc
        bsp/crypto
        bsp/drivers/adc
        bsp/drivers/beep
        bsp/drivers/crc
        bsp/drivers/crypto
        bsp/drivers/dma
        bsp/drivers/flash
        bsp/drivers/general
        bsp/drivers/gpio
        bsp/drivers/i2c
        bsp/drivers/pwr
        bsp/drivers/rng
        bsp/drivers/rtc
        bsp/drivers/spi
        bsp/drivers/sport
        bsp/drivers/tmr
        bsp/drivers/uart
        bsp/drivers/wdt
        bsp/drivers/xint
        bsp/flash
        bsp/gpio
        bsp/i2c
        bsp/pwr
        bsp/rng
        bsp/rtc
        bsp/rtos_map
        bsp/spi
        bsp/sport
        bsp/sys
        bsp/uart
        bsp/xint
)

target_sources(mbed-core
    INTERFACE
        bsp/crypto/adi_crypto.c
        bsp/wdt/adi_wdt.c
        bsp/crc/adi_crc.c
        bsp/i2c/adi_i2c.c
        bsp/i2c/adi_i2c_data.c
        bsp/sport/adi_sport.c
        bsp/tmr/adi_tmr_data.c
        bsp/tmr/adi_tmr.c
        bsp/flash/adi_flash.c
        bsp/flash/adi_flash_data.c
        bsp/spi/adi_spi_data.c
        bsp/spi/adi_spi.c
        bsp/xint/adi_xint.c
        bsp/adc/adi_adc.c
        bsp/adc/adi_adc_data.c
        bsp/beep/adi_beep.c
        bsp/rtc/adi_rtc_data.c
        bsp/rtc/adi_rtc.c
        bsp/pwr/adi_pwr.c
        bsp/dma/adi_dma.c
        bsp/gpio/adi_gpio.c
        bsp/uart/adi_uart.c
        bsp/rng/adi_rng.c
        api/us_ticker.c
        api/serial_api.c
        api/gpio_dev_mem.c
        api/gpio_api.c
        api/flash_api.c
        api/spi_api.c
        api/i2c_api.c
        api/gpio_irq_api.c
        api/trng_api.c
        api/sleep.c
        api/PeripheralPins.c
        api/analogin_api.c
        api/rtc_api.c
        api/pinmap.c
)
