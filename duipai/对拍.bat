@echo off
:loop
data.exe > data.txt
ac.exe < data.txt > ac.txt
baoli.exe < data.txt > baoli.txt
fc ac.txt baoli.txt
if not errorlevel 1 goto loop
set tip = data.txt
echo ***** data.txt
type data.txt
echo *****
PAUSE
goto loop
