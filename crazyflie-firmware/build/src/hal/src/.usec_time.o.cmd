cmd_src/hal/src/usec_time.o := arm-none-eabi-gcc -Wp,-MD,src/hal/src/.usec_time.o.d    -I../src/hal/src -Isrc/hal/src -D__firmware__ -fno-exceptions -Wall -Wmissing-braces -fno-strict-aliasing -ffunction-sections -fdata-sections -Wdouble-promotion -std=gnu11 -DCRAZYFLIE_FW  -I../../vendor/CMSIS/CMSIS/Core/Include -I../vendor/CMSIS/CMSIS/Core/Include  -I../../vendor/CMSIS/CMSIS/DSP/Include -I../vendor/CMSIS/CMSIS/DSP/Include  -I../../vendor/libdw1000/inc -I../vendor/libdw1000/inc  -I../../vendor/FreeRTOS/include -I../vendor/FreeRTOS/include  -I../../vendor/FreeRTOS/portable/GCC/ARM_CM4F -I../vendor/FreeRTOS/portable/GCC/ARM_CM4F  -I../../src/config -I../src/config  -I../../src/platform/interface -I../src/platform/interface  -I../../src/deck/interface -I../src/deck/interface  -I../../src/deck/drivers/interface -I../src/deck/drivers/interface  -I../../src/drivers/interface -I../src/drivers/interface  -I../../src/drivers/bosch/interface -I../src/drivers/bosch/interface  -I../../src/drivers/esp32/interface -I../src/drivers/esp32/interface  -I../../src/hal/interface -I../src/hal/interface  -I../../src/modules/interface -I../src/modules/interface  -I../../src/modules/interface/kalman_core -I../src/modules/interface/kalman_core  -I../../src/modules/interface/lighthouse -I../src/modules/interface/lighthouse  -I../../src/modules/interface/cpx -I../src/modules/interface/cpx  -I../../src/modules/interface/p2pDTR -I../src/modules/interface/p2pDTR  -I../../src/utils/interface -I../src/utils/interface  -I../../src/utils/interface/kve -I../src/utils/interface/kve  -I../../src/utils/interface/lighthouse -I../src/utils/interface/lighthouse  -I../../src/utils/interface/tdoa -I../src/utils/interface/tdoa  -I../../src/lib/FatFS -I../src/lib/FatFS  -I../../src/lib/CMSIS/STM32F4xx/Include -I../src/lib/CMSIS/STM32F4xx/Include  -I../../src/lib/STM32_USB_Device_Library/Core/inc -I../src/lib/STM32_USB_Device_Library/Core/inc  -I../../src/lib/STM32_USB_OTG_Driver/inc -I../src/lib/STM32_USB_OTG_Driver/inc  -I../../src/lib/STM32F4xx_StdPeriph_Driver/inc -I../src/lib/STM32F4xx_StdPeriph_Driver/inc  -I../../src/lib/vl53l1 -I../src/lib/vl53l1  -I../../src/lib/vl53l1/core/inc -I../src/lib/vl53l1/core/inc  -I../build/include/generated -Ibuild/include/generated -fno-delete-null-pointer-checks --param=allow-store-data-races=0 -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=date-time -DCC_HAVE_ASM_GOTO -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g3 -fno-math-errno -DARM_MATH_CM4 -D__FPU_PRESENT=1 -mfp16-format=ieee -Wno-array-bounds -Wno-stringop-overread -Wno-stringop-overflow -DSTM32F4XX -DSTM32F40_41xxx -DHSE_VALUE=8000000 -DUSE_STDPERIPH_DRIVER -Os -Werror   -c -o src/hal/src/usec_time.o ../src/hal/src/usec_time.c

source_src/hal/src/usec_time.o := ../src/hal/src/usec_time.c

deps_src/hal/src/usec_time.o := \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdbool.h \
  ../src/hal/interface/usec_time.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h \
  ../src/utils/interface/cfassert.h \
  ../src/config/nvicconf.h \
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

src/hal/src/usec_time.o: $(deps_src/hal/src/usec_time.o)

$(deps_src/hal/src/usec_time.o):
