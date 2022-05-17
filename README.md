# Pico-ESP32
将各种外设和传感器移植到ESP32系列芯片上，主要采用C编写驱动库


## 项目目录结构 
ESP32X_Demo/
├── app     (应用层)
│   ├── inc     (应用层头文件)
│   └── src     (应用层源文件)
├── CMakeLists.txt      (Cmake)
├── hal     (驱动曾)
│   ├── inc     (驱动层头文件)
│   └── src     (驱动层源文件)
├── main    
│   ├── CMakeLists.txt    (Cmake)
│   ├── ESP32X_Demo.c     (主函数)
│   └── main.h            (头文件汇总)
├── Makefile
├── README.md
