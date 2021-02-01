function Initialize()
	w=SKIN:GetVariable('btw','180')--图标宽度
	h=SKIN:GetVariable('bth','40')--图标高度
	d=SKIN:GetVariable('strdown','40')--文字向下偏移量
	c=SKIN:GetVariable('strColor','0,0,0')--文本颜色
	g=SKIN:GetVariable('bty','10')--按钮间隔
	x=SKIN:GetVariable('x',10)--整体向右偏移量
	y=SKIN:GetVariable('y',0)--整体向下偏移量
	b=0
	k=0
end

function setdock(n)
	SKIN:Bang('!SetOption dock'..n..' x '..x+(w-b*w/100))
	SKIN:Bang('!SetOption dock'..n..' ImageTint 255,255,255,'..b*2.55)
	SKIN:Bang('!SetOption string'..n..' y '..y+(h+g)*(n-2)+d+h*b/100+h/2+g)
	SKIN:Bang('!SetOption string'..n..' FontColor '..c..','..b*2.55)
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

function position(p)--返回0-100的值
	po=0
	if(p<0)then
		p=0
	end
	if(p>16)then
		p=17
	end
	if(p<=9)then
		po = (8*p)
	else
		po=72
		while(p-9>0)do
			po=po+8-(p-9)
			p=p-1
		end
	end
	return po
end

function Update()
	if(k<26)then
		j=0
		while(j<10)do
			b=position(k-j)
			setdock(j+1)
			updatedock(j+1)
			j=j+1
		end
		k=k+1
	else
		stopaction()
	end
end