@echo off
setlocal enabledelayedexpansion

if not exist "@umf" mkdir "@umf"
if not exist "@umf\addons" mkdir "@umf\addons"
if not exist "@umf\optionals" mkdir "@umf\optionals"

if "%PROCESSOR_ARCHITECTURE%"=="AMD64" (set armake=tools\armake_w64.exe) else (set armake=tools\armake_w32.exe)

for /d %%f in (addons\*) do (
    set folder=%%f
    set name=!folder:addons\=!
    echo   PBO  @umf\addons\umf_!name!.pbo
    !armake! build -i include -w unquoted-string -w redefinition-wo-undef -f !folder! @umf\addons\umf_!name!.pbo
)

for /d %%f in (optionals\*) do (
    set folder=%%f
    set name=!folder:optionals\=!
    echo   PBO  @umf\optionals\umf_!name!.pbo
    !armake! build -i include -w unquoted-string -w redefinition-wo-undef -f !folder! @umf\optionals\umf_!name!.pbo
)

pause
