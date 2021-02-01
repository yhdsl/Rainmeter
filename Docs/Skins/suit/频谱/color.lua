function Update()
	bar_num=0
	sta_num=0
	end_num=99
	str1='!SetOption bar'
	str2=' BarColor ([band'
	str3=']*255),([band'
	str4=']*255),([band'
	str5=']*255),255'
	SKIN:Bang(str1..bar_num..str2..end_num..str3..bar_num..str4..(bar_num+1)..str5)
	bar_num=bar_num+1
	while(bar_num<99)
	do
		SKIN:Bang(str1..bar_num..str2..(bar_num-1)..str3..bar_num..str4..(bar_num+1)..str5)
		bar_num=bar_num+1
	end
	SKIN:Bang(str1..bar_num..str2..(bar_num-1)..str3..bar_num..str4..sta_num..str5)
end