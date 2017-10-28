@echo off
@color 4
@title Your profile

echo What your name? 
set /p name="";
echo Where do you live?
set /p address="";
echo How old are you?
set /p age=""
cls
echo ----YOUR INFORMATION----
echo Hello: %name%
echo You live in: %address%
if %age% GTR 40 (
	echo Your are %age% years old, you are too old!
) else (
	echo Your are %age% years old, you are too young!
)
echo -----THE END--------
pause

