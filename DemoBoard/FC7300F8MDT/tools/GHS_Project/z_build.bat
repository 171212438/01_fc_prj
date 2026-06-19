@echo off

set "ghs_com=C:\ghs\comp_202214"
set "ghs_project=z_MCAL_FC7300F8MDT_GHS_Demo.gpj"

rem echo= Clean default project
rem "%ghs_com%\gbuild" -clean -top %ghs_project%


echo= Build default project
"%ghs_com%\gbuild" -top %ghs_project%

echo= Build default project finished

pause