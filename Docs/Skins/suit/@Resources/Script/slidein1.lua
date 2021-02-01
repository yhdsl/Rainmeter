function Initialize()
	i=0
	k=1
	d=1
end

function setdock(n)
	SKIN:Bang('!SetOption dock'..n..' y '..100)
	--SKIN:Bang('!SetOption dock'..n..' ImageTint 255,255,255,'..b/300*255)
	--SKIN:Bang('!SetOption string'..n..' y '..n-50*(n-1))
	--SKIN:Bang('!SetOption string'..n..' FontColor 0,0,0,'..b/300*255)
end

function updatedock(n)
	SKIN:Bang('!UpdateMeter dock'..n)
	SKIN:Bang('!UpdateMeter string'..n)
	SKIN:Bang('!Redraw')
end

function stopaction()
	SKIN:Bang('!CommandMeasure repeat "stop 1"')
	SKIN:Bang('!DisableMeasure getin')
end

function Update()
	if(k>9)then
		k=0
		d=d+1
	end
	if(i<100)then
		setdock(d)
		updatedock(d)
		k=k+1
		i=i+1
	else
		stopaction()
	end
end