cmd_src/drivers/src/i2cdev.o := arm-none-eabi-gcc -Wp,-MD,src/drivers/src/.i2cdev.o.d    -I../src/drivers/src -Isrc/drivers/src -D__firmware__ -fno-exceptions -Wall -Wmissing-braces -fno-strict-aliasing -ffunction-sections -fdata-sections -Wdouble-promotion -std=gnu11 -DCRAZYFLIE_FW  -I../../vendor/CMSIS/CMSIS/Core/Include -I../vendor/CMSIS/CMSIS/Core/Include  -I../../vendor/CMSIS/CMSIS/DSP/Include -I../vendor/CMSIS/CMSIS/DSP/Include  -I../../vendor/libdw1000/inc -I../vendor/libdw1000/inc  -I../../vendor/FreeRTOS/include -I../vendor/FreeRTOS/include  -I../../vendor/FreeRTOS/portable/GCC/ARM_CM4F -I../vendor/FreeRTOS/portable/GCC/ARM_CM4F  -I../../src/config -I../src/config  -I../../src/platform/interface -I../src/platform/interface  -I../../src/deck/interface -I../src/deck/interface  -I../../src/deck/drivers/interface -I../src/deck/drivers/interface  -I../../src/drivers/interface -I../src/drivers/interface  -I../../src/drivers/bosch/interface -I../src/drivers/bosch/interface  -I../../src/drivers/esp32/interface -I../src/drivers/esp32/interface  -I../../src/hal/interface -I../src/hal/interface  -I../../src/modules/interface -I../src/modules/interface  -I../../src/modules/interface/kalman_core -I../src/modules/interface/kalman_core  -I../../src/modules/interface/lighthouse -I../src/modules/interface/lighthouse  -I../../src/modules/interface/cpx -I../src/modules/interface/cpx  -I../../src/modules/interface/p2pDTR -I../src/modules/interface/p2pDTR  -I../../src/utils/interface -I../src/utils/interface  -I../../src/utils/interface/kve -I../src/utils/interface/kve  -I../../src/utils/interface/lighthouse -I../src/utils/interface/lighthouse  -I../../src/utils/interface/tdoa -I../src/utils/interface/tdoa  -I../../src/lib/FatFS -I../src/lib/FatFS  -I../../src/lib/CMSIS/STM32F4xx/Include -I../src/lib/CMSIS/STM32F4xx/Include  -I../../src/lib/STM32_USB_Device_Library/Core/inc -I../src/lib/STM32_USB_Device_Library/Core/inc  -I../../src/lib/STM32_USB_OTG_Driver/inc -I../src/lib/STM32_USB_OTG_Driver/inc  -I../../src/lib/STM32F4xx_StdPeriph_Driver/inc -I../src/lib/STM32F4xx_StdPeriph_Driver/inc  -I../../src/lib/vl53l1 -I../src/lib/vl53l1  -I../../src/lib/vl53l1/core/inc -I../src/lib/vl53l1/core/inc  -I../build/include/generated -Ibuild/include/generated -fno-delete-null-pointer-checks --param=allow-store-data-races=0 -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=date-time -DCC_HAVE_ASM_GOTO -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g3 -fno-math-errno -DARM_MATH_CM4 -D__FPU_PRESENT=1 -mfp16-format=ieee -Wno-array-bounds -Wno-stringop-overread -Wno-stringop-overflow -DSTM32F4XX -DSTM32F40_41xxx -DHSE_VALUE=8000000 -DUSE_STDPERIPH_DRIVER -Os -Werror   -c -o src/drivers/src/i2cdev.o ../src/drivers/src/i2cdev.c

source_src/drivers/src/i2cdev.o := ../src/drivers/src/i2cdev.c

deps_src/drivers/src/i2cdev.o := \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdbool.h \
  ../vendor/FreeRTOS/include/FreeRTOS.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h \
  ../src/config/FreeRTOSConfig.h \
    $(wildcard include/config/h.h) \
    $(wildcard include/config/debug/queue/monitor.h) \
  ../src/config/config.h \
    $(wildcard include/config/h/.h) \
    $(wildcard include/config/block/address.h) \
  ../src/drivers/interface/nrf24l01.h \
  ../src/drivers/interface/nRF24L01reg.h \
  ../src/config/trace.h \
  ../src/hal/interface/usec_time.h \
  ../src/utils/interface/cfassert.h \
  ../vendor/FreeRTOS/include/projdefs.h \
  ../vendor/FreeRTOS/include/portable.h \
  ../vendor/FreeRTOS/include/deprecated_definitions.h \
  ../vendor/FreeRTOS/portable/GCC/ARM_CM4F/portmacro.h \
  ../vendor/FreeRTOS/include/mpu_wrappers.h \
  ../vendor/FreeRTOS/include/semphr.h \
  ../vendor/FreeRTOS/include/queue.h \
  ../vendor/FreeRTOS/include/task.h \
  ../vendor/FreeRTOS/include/list.h \
  ../vendor/FreeRTOS/include/task.h \
  ../vendor/FreeRTOS/include/queue.h \
  ../src/drivers/interface/i2cdev.h \
  ../src/drivers/interface/i2c_drv.h \
  ../src/config/stm32fxxx.h \
  ../src/lib/CMSIS/STM32F4xx/Include/stm32f4xx.h \
  ../vendor/CMSIS/CMSIS/Core/Include/core_cm4.h \
  ../vendor/CMSIS/CMSIS/Core/Include/cmsis_version.h \
  ../vendor/CMSIS/CMSIS/Core/Include/cmsis_compiler.h \
  ../vendor/CMSIS/CMSIS/Core/Include/cmsis_gcc.h \
  ../vendor/CMSIS/CMSIS/Core/Include/mpu_armv7.h \
  ../src/lib/CMSIS/STM32F4xx/Include/system_stm32f4xx.h \
  ../src/config/stm32f4xx_conf.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_adc.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_crc.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_dbgmcu.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_dma.h \
    $(wildcard include/config/it.h) \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_exti.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_flash.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_gpio.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_i2c.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_iwdg.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_pwr.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_rcc.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_rtc.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_sdio.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_spi.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_syscfg.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_tim.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_usart.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_wwdg.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_misc.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_cryp.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_hash.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_rng.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_can.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_dac.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_dcmi.h \
  ../src/lib/STM32F4xx_StdPeriph_Driver/inc/stm32f4xx_fsmc.h \
  ../src/drivers/interface/i2c_drv.h \
  ../src/config/nvicconf.h \
  ../src/utils/interface/debug.h \
    $(wildcard include/config/debug/print/on/uart1.h) \
  ../src/config/config.h \
  ../src/modules/interface/console.h \
  ../src/utils/interface/eprintf.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdarg.h \

src/drivers/src/i2cdev.o: $(deps_src/drivers/src/i2cdev.o)

$(deps_src/drivers/src/i2cdev.o):
