cmake_minimum_required(VERSION 3.13)

project(UnicodeHandlerTest C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(UnicodeHandlerTest
        main.cpp
)

set_target_properties(UnicodeHandlerTest
        PROPERTIES
        COMPILE_DEFINITIONS BUILD_FOR_PICO_CMAKE=1
        COMPILE_DEFINITIONS IO_LOGGING_DEBUG=1
)

pico_add_extra_outputs(UnicodeHandlerTest)

target_link_libraries(UnicodeHandlerTest
        pico_stdlib pico_sync hardware_i2c hardware_spi hardware_adc hardware_pwm
        SimpleCollections TaskManagerIO IoAbstraction tcUnicodeHelper LiquidCrystalIO AdafruitGFXNativePort
)