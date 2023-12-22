@ECHO OFF
gcc -o main.exe main.c include/*.c
.\main.exe
del main.exe