echo publish begin

mkdir publish\include
mkdir publish\lib\debug
mkdir publish\lib\release
cp strategy_struct.h publish\include
cp strategy.h publish\include

if exist debug\quant_strategy.dll ( cp debug\quant_strategy.dll publish\lib\debug )
if exist release\quant_strategy.dll ( cp release\quant_strategy.dll publish\lib\release )

echo publish end
pause
