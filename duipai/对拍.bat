@echo off
:loop
gen.exe > data.txt
std.exe < data.txt > std.txt
test.exe < data.txt > my.txt
fc std.txt my.txt
if not errorlevel 1 goto loop
PAUSE
goto loop
