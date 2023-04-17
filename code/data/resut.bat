@echo off
set /p num=Enter a number: 
if %num% EQU 0 (
  set result=zero
) else (
  set result=non-zero
)
echo The number is %result%.
pause
