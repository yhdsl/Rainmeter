function Initialize( ... )

local i=0

--指令个数
item=tonumber(SKIN:GetVariable('Item'))
n=tonumber(SKIN:GetVariable('N'))
w=tonumber(SKIN:GetVariable('W'))
border=tonumber(SKIN:GetVariable('Border'))
--Meter样式载入
for i=1,item do	
	if SKIN:GetVariable(i) == '' then
		SKIN:Bang('!SetOption', i, 'MeterStyle','StyleText')
	else
		SKIN:Bang('!SetOption', i, 'LeftMouseUpAction','[!CommandMeasure MeasureQuickBang #'..i..'#]')
		SKIN:Bang('!SetOption', i, 'MeterStyle','StyleText | StyleBotton')
	end
	SKIN:Bang('!SetOption', i, 'Text','#'..i..'#')
	SKIN:Bang('!SetOption', i, 'X',border+(i-1)%n*w+w/2)
	if i%n~=1 then
		SKIN:Bang('!SetOption', i, 'Y','r')
	end
end

SKIN:Bang('!SetOption', item, 'X','(#W#*1.5)r')

end

function Update()

end