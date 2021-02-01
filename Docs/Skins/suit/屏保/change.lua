function Initialize()
	bca=260
	pic=0
	re=0
end

function redraw(meter)
	SKIN:Bang('!UpdateMeter wallpaper'..meter)
	SKIN:Bang('!Redraw')
end

function Update()
	if(bca>=0)then
		if(bca==240)then
			while(re==pic)do
				pic=math.random(0,10)
			end
			re=pic
			SKIN:Bang('!SetOption wallpaper0 ImageName '..pic..'.jpg')
			redraw(0)
		else
			SKIN:Bang('!SetOption wallpaper1 ImageTint 255,255,255,'..bca)
			redraw(1)
		end
	else
		bca=260
		SKIN:Bang('!SetOption wallpaper1 ImageName '..pic..'.jpg')
		SKIN:Bang('!SetOption wallpaper1 ImageTint 255,255,255,'..bca)
		redraw(1)	
		SKIN:Bang('!CommandMeasure change terminate')
	end
	bca=bca-10
end

