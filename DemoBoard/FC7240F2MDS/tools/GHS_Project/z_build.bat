@echo off

set "ghs_com=C:\ghs\comp_202214"
set "ghs_project=z_Mcal_DemoBoard_Project_FC7240.gpj"

echo= Clean default project
"%ghs_com%\gbuild" -clean -top %ghs_project%


echo= Build default project
"%ghs_com%\gbuild" -top %ghs_project%

echo= Build default project finished