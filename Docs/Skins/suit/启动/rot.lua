function Initialize()
	a=0
end

function Update()
	a=a+6
	if(a<180)then
		b=a+90
	else
		if(a<=360)then
			SKIN:Bang('!SetVariable he '..(360-a)*3)
		else
			if(a<490)then
				SKIN:Bang('!SetOption bg SolidColor 255,255,255,'..(490-a)*2)
			else
				--SKIN:Bang('!DeactivateConfig')
				dt:Disable()
			end
		end
	end
	return b
end