/*
 * efifeatures.h
 *
 * @date Mar 7, 2014
 * @author Andrey Belomutskiy, (c) 2012-2016
 */

#ifndef EFIFEATURES_H_
#define EFIFEATURES_H_

#include "rusefi_true.h"

#define EFI_ENABLE_ASSERTS TRUE

#define EFI_ENABLE_MOCK_ADC TRUE

#define EFI_PRINTF_FUEL_DETAILS TRUE
#define EFI_ENABLE_CRITICAL_ENGINE_STOP TRUE
#define EFI_ENABLE_ENGINE_WARNING TRUE

#define EFI_SERVO FALSE

#define EFI_LCD FALSE

#define TS_UART_MODE FALSE

#define EFI_USB_SERIAL FALSE

#define EFI_CDM_INTEGRATION FALSE

#define EFI_MC33816 FALSE

#define EFI_BLUETOOTH_SETUP FALSE

#define EFI_GPIO_HARDWARE FALSE

#define EFI_CLOCK_LOCKS FALSE

#define EFI_FSIO TRUE

#define EFI_TEXT_LOGGING TRUE

#define EFI_MEMS FALSE

#ifndef EFI_TOOTH_LOGGER
#define EFI_TOOTH_LOGGER TRUE
#endif

#define CONSOLE_MAX_ACTIONS 256

#define EFI_SIMULATOR TRUE
#define EFI_PROD_CODE FALSE
#define TS_UART_DMA_MODE FALSE

#define EFI_MAP_AVERAGING TRUE
#define EFI_ALTERNATOR_CONTROL FALSE

#define EFI_SUPPORT_DODGE_NEON TRUE
#define EFI_SUPPORT_FORD_ASPIRE TRUE
#define EFI_SUPPORT_FORD_FIESTA TRUE
#define EFI_SUPPORT_NISSAN_PRIMERA TRUE
#define EFI_SUPPORT_1995_FORD_INLINE_6 TRUE

#define EFI_ENGINE_AUDI_AAN FALSE
#define EFI_ENGINE_SNOW_BLOWER FALSE

/**
 * simulator works via self-stimulation which works via trigger emulation
 */
#define EFI_EMULATE_POSITION_SENSORS TRUE

#define EFI_SIGNAL_EXECUTOR_SLEEP TRUE
#define EFI_INTERNAL_ADC FALSE
#define EFI_EGT FALSE

#define EFI_SHAFT_POSITION_INPUT TRUE
#define EFI_UART_ECHO_TEST_MODE FALSE

#define EFI_ENGINE_CONTROL TRUE
#define EFI_IDLE_CONTROL TRUE

#define EFI_IDLE_INCREMENTAL_PID_CIC FALSE
#define EFI_MAIN_RELAY_CONTROL FALSE
#define EFI_HIP_9011 TRUE
#define EFI_CJ125 FALSE
#define EFI_CAN_SUPPORT FALSE
#define EFI_MAX_31855 FALSE

#define BOARD_TLE6240_COUNT         0
#define BOARD_MC33972_COUNT			0
#define BOARD_TLE8888_COUNT 	0

#define EFI_ELECTRONIC_THROTTLE_BODY FALSE
#define EFI_AUX_PID FALSE
#define EFI_ICU_INPUTS FALSE
#define EFI_UART_GPS FALSE
#define EFI_HAS_RESET FALSE
#define EXTREME_TERM_LOGGING FALSE
#define DEBUG_FUEL FALSE
#define EFI_FUEL_PUMP FALSE
#define DEBUG_WAVE FALSE

#define EFI_DEFAILED_LOGGING FALSE
#define EFI_ENGINE_SNIFFER TRUE

#define FUEL_MATH_EXTREME_LOGGING FALSE
#define EFI_ANALOG_SENSORS TRUE
#define EFI_INTERNAL_FLASH FALSE
#define EFI_RTC FALSE
#define EFI_MALFUNCTION_INDICATOR FALSE
#define EFI_HD44780_LCD FALSE
#define EFI_WAVE_ANALYZER FALSE
#define EFI_PWM_TESTER FALSE
#define TRIGGER_EXTREME_LOGGING FALSE
#define SPARK_EXTREME_LOGGING FALSE
#define DEBUG_PWM FALSE
#define EFI_SIGNAL_EXECUTOR_ONE_TIMER FALSE
#define EFI_TUNER_STUDIO_VERBOSE FALSE
#define EFI_FILE_LOGGING FALSE
#define EFI_WARNING_LED FALSE
#define EFI_VEHICLE_SPEED FALSE

#define EFI_SENSOR_CHART TRUE
#define EFI_HISTOGRAMS FALSE

#define EFI_TUNER_STUDIO TRUE

/**
 * This is the size of the MemoryStream used by chvprintf
 */
#define INTERMEDIATE_LOGGING_BUFFER_SIZE 2000

#define EFI_UNIT_TEST FALSE

#define EFI_BOARD_TEST FALSE
#define EFI_JOYSTICK FALSE


#endif /* EFIFEATURES_H_ */
