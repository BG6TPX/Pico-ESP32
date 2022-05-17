# Pico-ESP32
将各种外设和传感器移植到ESP32系列芯片上，主要采用C编写驱动库


## 项目目录结构
|——ESP32X_Demo
|   |-main  (主函数)
|   |   |-main.h    (头文件汇总)
|   |   |-ESP32X_Demo.c    (主函数)
|   |   |-CMakelist.txt    (编译)
|   |-hal   (底层驱动库)
|   |   |-inc   (底层头文件)
|   |   |-src   (底层驱动源代码)
|   |-app   (应用层)
|   |   |-inc   (应用层头文件)
|   |   |-src   (应用层源文件)
|   |-build    (编译文件)