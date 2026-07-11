@echo off
g++ src/main.cpp src/adb.cpp src/action.cpp src/config.cpp -o BabySafe.exe -static
pause
