function Initialize( ... )

    local i=0

    --指令个数
    item=tonumber(SKIN:GetVariable('Item'))

    --Meter样式载入
    for i=1,item do
	SKIN:Bang('!SetOption', i..'T', 'MeterStyle','StyleTextLeft')
	SKIN:Bang('!SetOption', i..'T', 'Text','#'..i..'T#')
	SKIN:Bang('!SetOption', i..'A', 'MeterStyle','StyleTextLeft | StyleL1')
	SKIN:Bang('!SetOption', i..'A', 'Text','#'..i..'A#')
	SKIN:Bang('!SetOption', i..'A', 'LeftMouseUpAction','[!CommandMeasure MeasureQuickBang #'..i..'A#]')
	SKIN:Bang('!SetOption', i..'B', 'MeterStyle','StyleTextLeft | StyleL2')
	SKIN:Bang('!SetOption', i..'B', 'Text','#'..i..'B#')
	SKIN:Bang('!SetOption', i..'B', 'LeftMouseUpAction','[!CommandMeasure MeasureQuickBang #'..i..'B#]')
	SKIN:Bang('!SetOption', i..'D', 'MeterStyle','StyleTextLeft | StyleL3')
	SKIN:Bang('!SetOption', i..'D', 'Text','#'..i..'D#')
    end

end

function Update()

end