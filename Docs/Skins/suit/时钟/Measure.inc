[MeasureHour]
Measure=Time
Format=%H
OnChangeAction=!UpdateMeasure MeasureHour0
[MeasureHour0]
Measure=Calc
Formula=MeasureHour%10
OnChangeAction=[!UpdateMeter Hour0][!Redraw]
IfEqualValue=0
IfEqualAction=!UpdateMeasure MeasureHour1
[MeasureHour1]
Measure=Calc
Formula=(MeasureHour-MeasureHour0)/10
OnChangeAction=[!UpdateMeter Hour1][!Redraw]

[MeasureMin]
Measure=Time
Format=%M
OnChangeAction=!UpdateMeasure MeasureMin0
IfEqualValue=0
;IfBelowAction=[!UpdateMeasure MeasureHour]
IfEqualAction=[!Update]
[MeasureMin0]
Measure=Calc
Formula=MeasureMin%10
OnchangeAction=[!UpdateMeter Min0][!Redraw]
IfEqualValue=0
IfEqualAction=!UpdateMeasure MeasureMin1
[MeasureMin1]
Measure=Calc
Formula=(MeasureMin-MeasureMin0)/10
OnChangeAction=[!UpdateMeter Min1][!Redraw]

[MeasureSec]
Measure=Time
Format=%S
OnChangeAction=!UpdateMeasure MeasureSec0
IfEqualValue=0
;IfEqualAction=!UpdateMeasure MeasureMin
IfEqualAction=[!Update][!CommandMeasure MeasureUpdate "Stop 1"][!CommandMeasure MeasureUpdate "Execute 1"]
[MeasureSec0]
Measure=Calc
Formula=MeasureSec%10
OnChangeAction=[!UpdateMeter Sec0][!Redraw]
IfEqualValue=0
IfEqualAction=!UpdateMeasure MeasureSec1
[MeasureSec1]
Measure=Calc
Formula=(MeasureSec-MeasureSec0)/10
OnChangeAction=[!UpdateMeter Sec1][!Redraw]
;[MeasureM]
;Measure=Calc
;Formula=MeasureSec%2
;OnChangeAction=[!UpdateMeter Metermh1][!Redraw]
;需要冒号闪烁功能，取消本节注释并在MeasureSec节点下加入对该节点的刷新动作。
;冒号闪烁会增加皮肤的cpu占用率