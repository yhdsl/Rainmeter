function Initialize()
    type={"SHA1","SHA256","SHA384","SHA512","MACTripleDES","MD5","RIPEMD160"}
    currentType=6
    TypeChange(currentType)
end

function Update()
    flag=SKIN:GetVariable('flag','2')
    if flag=='0' then
        if currentType==7 then
            currentType=1
        else
            currentType=currentType+1
        end
        TypeChange(currentType)
    elseif flag=='1' then
        if currentType==1 then
            currentType=7
        else
            currentType=currentType-1
        end
        TypeChange(currentType)
    elseif flag=='2' then
        measurehash=SKIN:GetMeasure('CalcHash')
        hash=measurehash:GetStringValue()
        if hash=='' then
            openfile=SKIN:GetMeasure('OpenFile')
            path=openfile:GetStringValue()
            if path=='' then
                SKIN:Bang('[!ShowMeterGroup button][!HideMeterGroup Started]')
                SKIN:Bang('!HideMeter HashType')
            else
                FileChanged(path)
            end
        else
            SKIN:Bang('[!SetOption StringInput MeterStyle StringStyle2][!UpdateMeter StringInput][!Redraw]')
            measureInput=SKIN:GetMeasure('Input')
            input=measureInput:GetStringValue()
            print("calc")
            if input~='' then
                SKIN:Bang('[!SetOption StringInput Text '..input..'][!Redraw]')
                if input==hash then
                    SKIN:Bang('[!SetOption MeterBackground Background "90 | 0,255,0,250;0 | 0,255,0,150;1"][!UpdateMeter MeterBackground][!Redraw]')
                else
                    SKIN:Bang('[!SetOption MeterBackground Background "90 | 255,0,0,250;0 | 255,0,0,150;1"][!UpdateMeter MeterBackground][!Redraw]')
                end
            end
        end
    end
end
function FileChanged(p,f)
    SKIN:Bang('[!HideMeter Button][!SetOption ButtonString Text 正在计算...][!UpdateMeter ButtonString][!Redraw][!SetVariable filePath '..p..']')
    SKIN:Bang('[!UpdateMeasure CalcHash][!CommandMeasure CalcHash "Run"]')
end

function TypeChange(t)
    SKIN:Bang('[!ShowMeter HashType][!SetVariable type '..type[t]..'][!SetOption HashType Text '..type[t]..'][!UpdateMeter HashType][!Redraw]')
end