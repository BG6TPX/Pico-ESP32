idf_component_register(SRCS "ESP32SX.c"

                            "../hal/src/uart.c"
                            "../hal/src/iic.c"

                            "../app/src/oled.c"

                    INCLUDE_DIRS "."
                                 "../hal/inc"
                                 "../app/inc"
                    
                    )
