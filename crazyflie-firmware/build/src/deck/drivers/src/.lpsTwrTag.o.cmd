cmd_src/deck/drivers/src/lpsTwrTag.o := arm-none-eabi-gcc -Wp,-MD,src/deck/drivers/src/.lpsTwrTag.o.d    -I../src/deck/drivers/src -Isrc/deck/drivers/src -D__firmware__ -fno-exceptions -Wall -Wmissing-braces -fno-strict-aliasing -ffunction-sections -fdata-sections -Wdouble-promotion -std=gnu11 -DCRAZYFLIE_FW  -I../../vendor/CMSIS/CMSIS/Core/Include -I../vendor/CMSIS/CMSIS/Core/Include  -I../../vendor/CMSIS/CMSIS/DSP/Include -I../vendor/CMSIS/CMSIS/DSP/Include  -I../../vendor/libdw1000/inc -I../vendor/libdw1000/inc  -I../../vendor/FreeRTOS/include -I../vendor/FreeRTOS/include  -I../../vendor/FreeRTOS/portable/GCC/ARM_CM4F -I../vendor/FreeRTOS/portable/GCC/ARM_CM4F  -I../../src/config -I../src/config  -I../../src/platform/interface -I../src/platform/interface  -I../../src/deck/interface -I../src/deck/interface  -I../../src/deck/drivers/interface -I../src/deck/drivers/interface  -I../../src/drivers/interface -I../src/drivers/interface  -I../../src/drivers/bosch/interface -I../src/drivers/bosch/interface  -I../../src/drivers/esp32/interface -I../src/drivers/esp32/interface  -I../../src/hal/interface -I../src/hal/interface  -I../../src/modules/interface -I../src/modules/interface  -I../../src/modules/interface/kalman_core -I../src/modules/interface/kalman_core  -I../../src/modules/interface/lighthouse -I../src/modules/interface/lighthouse  -I../../src/modules/interface/cpx -I../src/modules/interface/cpx  -I../../src/modules/interface/p2pDTR -I../src/modules/interface/p2pDTR  -I../../src/utils/interface -I../src/utils/interface  -I../../src/utils/interface/kve -I../src/utils/interface/kve  -I../../src/utils/interface/lighthouse -I../src/utils/interface/lighthouse  -I../../src/utils/interface/tdoa -I../src/utils/interface/tdoa  -I../../src/lib/FatFS -I../src/lib/FatFS  -I../../src/lib/CMSIS/STM32F4xx/Include -I../src/lib/CMSIS/STM32F4xx/Include  -I../../src/lib/STM32_USB_Device_Library/Core/inc -I../src/lib/STM32_USB_Device_Library/Core/inc  -I../../src/lib/STM32_USB_OTG_Driver/inc -I../src/lib/STM32_USB_OTG_Driver/inc  -I../../src/lib/STM32F4xx_StdPeriph_Driver/inc -I../src/lib/STM32F4xx_StdPeriph_Driver/inc  -I../../src/lib/vl53l1 -I../src/lib/vl53l1  -I../../src/lib/vl53l1/core/inc -I../src/lib/vl53l1/core/inc  -I../build/include/generated -Ibuild/include/generated -fno-delete-null-pointer-checks --param=allow-store-data-races=0 -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=date-time -DCC_HAVE_ASM_GOTO -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g3 -fno-math-errno -DARM_MATH_CM4 -D__FPU_PRESENT=1 -mfp16-format=ieee -Wno-array-bounds -Wno-stringop-overread -Wno-stringop-overflow -DSTM32F4XX -DSTM32F40_41xxx -DHSE_VALUE=8000000 -DUSE_STDPERIPH_DRIVER -Os -Werror   -c -o src/deck/drivers/src/lpsTwrTag.o ../src/deck/drivers/src/lpsTwrTag.c

source_src/deck/drivers/src/lpsTwrTag.o := ../src/deck/drivers/src/lpsTwrTag.c

deps_src/deck/drivers/src/lpsTwrTag.o := \
    $(wildcard include/config/deck/loco/tdma/slots.h) \
  /usr/include/newlib/string.h \
  /usr/include/newlib/_ansi.h \
  /usr/include/newlib/newlib.h \
  /usr/include/newlib/_newlib_version.h \
  /usr/include/newlib/sys/config.h \
    $(wildcard include/config/h//.h) \
  /usr/include/newlib/machine/ieeefp.h \
  /usr/include/newlib/sys/features.h \
  /usr/include/newlib/sys/reent.h \
  /usr/include/newlib/_ansi.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stddef.h \
  /usr/include/newlib/sys/_types.h \
  /usr/include/newlib/machine/_types.h \
  /usr/include/newlib/machine/_default_types.h \
  /usr/include/newlib/sys/lock.h \
  /usr/include/newlib/sys/cdefs.h \
  /usr/include/newlib/sys/_locale.h \
  /usr/include/newlib/strings.h \
  /usr/include/newlib/sys/string.h \
  /usr/include/newlib/math.h \
  ../src/deck/drivers/interface/lpsTwrTag.h \
  ../src/deck/drivers/interface/locodeck.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdint.h \
  ../vendor/FreeRTOS/include/FreeRTOS.h \
  ../src/config/FreeRTOSConfig.h \
    $(wildcard include/config/h.h) \
    $(wildcard include/config/debug/queue/monitor.h) \
  ../src/config/config.h \
    $(wildcard include/config/h/.h) \
    $(wildcard include/config/block/address.h) \
  ../src/drivers/interface/nrf24l01.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/stdbool.h \
  ../src/drivers/interface/nRF24L01reg.h \
  ../src/config/trace.h \
  ../src/hal/interface/usec_time.h \
  ../src/utils/interface/cfassert.h \
  ../vendor/FreeRTOS/include/projdefs.h \
  ../vendor/FreeRTOS/include/portable.h \
  ../vendor/FreeRTOS/include/deprecated_definitions.h \
  ../vendor/FreeRTOS/portable/GCC/ARM_CM4F/portmacro.h \
  ../vendor/FreeRTOS/include/mpu_wrappers.h \
  ../vendor/libdw1000/inc/libdw1000.h \
  ../vendor/libdw1000/inc/libdw1000Spi.h \
  ../vendor/libdw1000/inc/dw1000.h \
  ../vendor/libdw1000/inc/libdw1000Types.h \
  ../src/modules/interface/stabilizer_types.h \
  ../src/hal/interface/imu_types.h \
  ../src/utils/interface/lighthouse/lighthouse_types.h \
  ../src/deck/drivers/interface/mac.h \
  ../src/deck/drivers/interface/lpsTdma.h \
    $(wildcard include/config/deck/loco/tdma.h) \
  ../vendor/FreeRTOS/include/task.h \
  ../vendor/FreeRTOS/include/list.h \
  ../src/modules/interface/log.h \
    $(wildcard include/config/debug/log/enable.h) \
  ../src/modules/interface/crtp_localization_service.h \
    $(wildcard include/config/deck/lighthouse.h) \
  ../src/modules/interface/stabilizer_types.h \
  ../src/utils/interface/lighthouse/pulse_processor.h \
    $(wildcard include/config/deck/lighthouse/max/n/bs.h) \
  /usr/include/newlib/stdlib.h \
  /usr/include/newlib/machine/stdlib.h \
  /usr/include/newlib/alloca.h \
  ../src/utils/interface/lighthouse/ootx_decoder.h \
  ../src/utils/interface/lighthouse/lighthouse_calibration.h \
  ../src/utils/interface/lighthouse/lighthouse_geometry.h \
  ../src/utils/interface/cf_math.h \
  ../vendor/CMSIS/CMSIS/DSP/Include/arm_math.h \
  ../vendor/CMSIS/CMSIS/Core/Include/cmsis_compiler.h \
  ../vendor/CMSIS/CMSIS/Core/Include/cmsis_gcc.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include/float.h \
  /usr/lib/gcc/arm-none-eabi/9.2.1/include-fixed/limits.h \
  ../src/utils/interface/cfassert.h \
  ../src/modules/interface/estimator.h \
    $(wildcard include/config/estimator/kalman/enable.h) \
    $(wildcard include/config/estimator/ukf/enable.h) \
    $(wildcard include/config/estimator/oot.h) \
  ../src/utils/interface/physicalConstants.h \
  ../src/utils/interface/configblock.h \
  ../src/modules/interface/static_mem.h \

src/deck/drivers/src/lpsTwrTag.o: $(deps_src/deck/drivers/src/lpsTwrTag.o)

$(deps_src/deck/drivers/src/lpsTwrTag.o):
