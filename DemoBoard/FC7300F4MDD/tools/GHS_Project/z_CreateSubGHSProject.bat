@ECHO OFF

rem *********************************************
rem * Anything of ghs project call beatfan *******
rem ********************************************/

set Project_Name=_BSW_generate
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj

ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj

for %%F in (../../%Project_Name%/Config/*.h)                         do ECHO ..\..\%Project_Name%\Config\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../%Project_Name%/NvM/include/*.h)                    do ECHO ..\..\%Project_Name%\NvM\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/NvM/source/*.c)                     do ECHO ..\..\%Project_Name%\NvM\source\%%F >> _SubProjects\%Project_Name%.gpj

set Project_Name=_Compile_Related_Files
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/Common/Include/*.h)                 do ECHO ..\..\%Project_Name%\Common\Include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/Det/include/*.h)                    do ECHO ..\..\%Project_Name%\Det\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/Det/src/*.c)                        do ECHO ..\..\%Project_Name%\Det\src\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/Systick/include/*.h)                do ECHO ..\..\%Project_Name%\Systick\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/Systick/src/*.c)                    do ECHO ..\..\%Project_Name%\Systick\src\%%F >> _SubProjects\%Project_Name%.gpj

set Project_Name=_MCAL_multicore_generate_4MDD

echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj

for %%F in (../../%Project_Name%/include/*.h)                 do ECHO ..\..\%Project_Name%\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/src/*.c)                     do ECHO ..\..\%Project_Name%\src\%%F >> _SubProjects\%Project_Name%.gpj



set Project_Name=Include
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/*.h)                 do ECHO ..\..\%Project_Name%\%%F >> _SubProjects\%Project_Name%.gpj

set Project_Name=Source
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../%Project_Name%/*.c)                 do ECHO ..\..\%Project_Name%\%%F >> _SubProjects\%Project_Name%.gpj


set Project_Name=App
echo= Create %Project_Name%

ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../App/Include/*.h)                do ECHO ..\..\App\Include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../App/Source/*.c)                 do ECHO ..\..\App\Source\%%F >> _SubProjects\%Project_Name%.gpj


set Project_Name=MCAL
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Adc/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Adc\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Adc/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Adc\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Base/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Base\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Base/include/MemMap/*.h)            do ECHO ..\..\..\..\MCAL\Src\Base\include\MemMap\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Base/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Base\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Can/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Can\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Can/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Can\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Common/include/*.h)                do ECHO ..\..\..\..\MCAL\Src\Common\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Common/src/*.c)                    do ECHO ..\..\..\..\MCAL\Src\Common\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Crc/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Crc\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Crc/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Crc\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Cryif/include/*.h)                 do ECHO ..\..\..\..\MCAL\Src\Cryif\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Cryif/src/*.c)                     do ECHO ..\..\..\..\MCAL\Src\Cryif\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Crypto/include/*.h)                do ECHO ..\..\..\..\MCAL\Src\Crypto\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Crypto/src/*.c)                    do ECHO ..\..\..\..\MCAL\Src\Crypto\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Dem/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Dem\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Dem/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Dem\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Dio/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Dio\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Dio/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Dio\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/DMA/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\DMA\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/DMA/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\DMA\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/EcuM/include/*.h)                  do ECHO ..\..\..\..\MCAL\Src\EcuM\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/EcuM/src/*.c)                      do ECHO ..\..\..\..\MCAL\Src\EcuM\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Eftu/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Eftu\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Eftu/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Eftu\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Eth/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Eth\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Eth/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Eth\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/EthIf/include/*.h)                 do ECHO ..\..\..\..\MCAL\Src\EthIf\include\%%F >> _SubProjects\%Project_Name%.gpj
rem for %%F in (../../../../MCAL/Src/EthIf/src/*.c)                     do ECHO ..\..\..\..\MCAL\Src\EthIf\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/EthTrcv/include/*.h)               do ECHO ..\..\..\..\MCAL\Src\EthTrcv\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/EthTrcv/src/*.c)                   do ECHO ..\..\..\..\MCAL\Src\EthTrcv\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Fee/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Fee\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Fee/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Fee\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Fls/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Fls\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Fls/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Fls\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Gpt/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Gpt\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Gpt/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Gpt\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/I2c/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\I2c\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/I2c/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\I2c\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Icu/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Icu\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Icu/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Icu\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Lin/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Lin\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Lin/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Lin\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/LinIf/*.h)                         do ECHO ..\..\..\..\MCAL\Src\LinIf\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/LinIf/*.c)                         do ECHO ..\..\..\..\MCAL\Src\LinIf\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Mb/include/*.h)                    do ECHO ..\..\..\..\MCAL\Src\Mb\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Mb/src/*.c)                        do ECHO ..\..\..\..\MCAL\Src\Mb\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Mcu/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Mcu\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Mcu/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Mcu\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Msc/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Msc\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Msc/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Msc\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Ocu/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Ocu\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Ocu/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Ocu\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Os/include/*.h)                    do ECHO ..\..\..\..\MCAL\Src\Os\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Os/src/*.c)                        do ECHO ..\..\..\..\MCAL\Src\Os\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Pfls/include/*.h)                  do ECHO ..\..\..\..\MCAL\Src\Pfls\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Pfls/src/*.c)                      do ECHO ..\..\..\..\MCAL\Src\Pfls\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Port/include/*.h)                  do ECHO ..\..\..\..\MCAL\Src\Port\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Port/src/*.c)                      do ECHO ..\..\..\..\MCAL\Src\Port\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Pwm/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Pwm\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Pwm/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Pwm\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/SchM/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\SchM\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/SchM/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\SchM\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Sdadc/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Sdadc\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Sdadc/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Sdadc\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Sent/include/*.h)                  do ECHO ..\..\..\..\MCAL\Src\Sent\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Sent/src/*.c)                      do ECHO ..\..\..\..\MCAL\Src\Sent\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Spi/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Spi\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Spi/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Spi\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Ssi/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Ssi\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Ssi/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Ssi\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/TrgSel/include/*.h)                do ECHO ..\..\..\..\MCAL\Src\TrgSel\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/TrgSel/src/*.c)                    do ECHO ..\..\..\..\MCAL\Src\TrgSel\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Wdg/include/*.h)                   do ECHO ..\..\..\..\MCAL\Src\Wdg\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Wdg/src/*.c)                       do ECHO ..\..\..\..\MCAL\Src\Wdg\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/WdgIf/include/*.h)                 do ECHO ..\..\..\..\MCAL\Src\WdgIf\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/WdgIf/src/*.c)                     do ECHO ..\..\..\..\MCAL\Src\WdgIf\src\%%F >> _SubProjects\%Project_Name%.gpj

for %%F in (../../../../MCAL/Src/Uart/include/*.h)                 do ECHO ..\..\..\..\MCAL\Src\Uart\include\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../../../MCAL/Src/Uart/src/*.c)                     do ECHO ..\..\..\..\MCAL\Src\Uart\src\%%F >> _SubProjects\%Project_Name%.gpj


echo= Create Middleware
set Project_Name=MiddleWare
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/Mpu/*.h)                do ECHO ..\..\MiddleWare\Mpu\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/Mpu/*.c)                do ECHO ..\..\MiddleWare\Mpu\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/RTT/*.h)                do ECHO ..\..\MiddleWare\RTT\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/RTT/*.c)                do ECHO ..\..\MiddleWare\RTT\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/UartDriver/*.h)                do ECHO ..\..\MiddleWare\UartDriver\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (../../MiddleWare/UartDriver/*.c)                do ECHO ..\..\MiddleWare\UartDriver\%%F >> _SubProjects\%Project_Name%.gpj

set Project_Name=Startup
echo= Create %Project_Name%
ECHO #!gbuild > _SubProjects\%Project_Name%.gpj
ECHO [Subproject] >> _SubProjects\%Project_Name%.gpj
for %%F in (./Startup/*.thm)                do ECHO .\Startup\%%F >> _SubProjects\%Project_Name%.gpj
for %%F in (./Startup/*.c)                  do ECHO .\Startup\%%F >> _SubProjects\%Project_Name%.gpj


echo= Create All Subproject completed!
