[audioParent]
Measure=Plugin
Type=Parent
Plugin=AudioAnalyzer_1_1
Processing=proc1
Processing_proc1=channels auto | handlers fft,resampler,blur,transform,fir,mapper
Handler_fft=type fft |attack 50 |binWidth 25 |cascadesCount 5 | testRandom 0
Handler_resampler=type BandResampler |source fft |freqList flist | proportionalValues 1| minCascade 0 | maxCascade 2
Handler_blur=type weightedBlur |source resampler | minRadius 0 | maxRadius 5 | MinRadiusAdaptation 1
Handler_transform=type BandCascadeTransformer |source blur | minWeight 0 | mixFunction product | weightFallback 0 | targetWeight 100
Handler_fir=type FiniteTimeFilter |source transform | smoothingFactor 5 | smoothingCurve flat
Handler_mapper=type LogarithmicValueMapper |source fir | offset -0.1
FreqList_flist=log 100 40 16000

[band0]
Measure=Plugin
Parent=audioParent
Index=0
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band1]
Measure=Plugin
Parent=audioParent
Index=1
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band2]
Measure=Plugin
Parent=audioParent
Index=2
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band3]
Measure=Plugin
Parent=audioParent
Index=3
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band4]
Measure=Plugin
Parent=audioParent
Index=4
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band5]
Measure=Plugin
Parent=audioParent
Index=5
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band6]
Measure=Plugin
Parent=audioParent
Index=6
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band7]
Measure=Plugin
Parent=audioParent
Index=7
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band8]
Measure=Plugin
Parent=audioParent
Index=8
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band9]
Measure=Plugin
Parent=audioParent
Index=9
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band10]
Measure=Plugin
Parent=audioParent
Index=10
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band11]
Measure=Plugin
Parent=audioParent
Index=11
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band12]
Measure=Plugin
Parent=audioParent
Index=12
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band13]
Measure=Plugin
Parent=audioParent
Index=13
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band14]
Measure=Plugin
Parent=audioParent
Index=14
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band15]
Measure=Plugin
Parent=audioParent
Index=15
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band16]
Measure=Plugin
Parent=audioParent
Index=16
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band17]
Measure=Plugin
Parent=audioParent
Index=17
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band18]
Measure=Plugin
Parent=audioParent
Index=18
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band19]
Measure=Plugin
Parent=audioParent
Index=19
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band20]
Measure=Plugin
Parent=audioParent
Index=20
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band21]
Measure=Plugin
Parent=audioParent
Index=21
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band22]
Measure=Plugin
Parent=audioParent
Index=22
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band23]
Measure=Plugin
Parent=audioParent
Index=23
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band24]
Measure=Plugin
Parent=audioParent
Index=24
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band25]
Measure=Plugin
Parent=audioParent
Index=25
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band26]
Measure=Plugin
Parent=audioParent
Index=26
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band27]
Measure=Plugin
Parent=audioParent
Index=27
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band28]
Measure=Plugin
Parent=audioParent
Index=28
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band29]
Measure=Plugin
Parent=audioParent
Index=29
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band30]
Measure=Plugin
Parent=audioParent
Index=30
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band31]
Measure=Plugin
Parent=audioParent
Index=31
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band32]
Measure=Plugin
Parent=audioParent
Index=32
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band33]
Measure=Plugin
Parent=audioParent
Index=33
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band34]
Measure=Plugin
Parent=audioParent
Index=34
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band35]
Measure=Plugin
Parent=audioParent
Index=35
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band36]
Measure=Plugin
Parent=audioParent
Index=36
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band37]
Measure=Plugin
Parent=audioParent
Index=37
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band38]
Measure=Plugin
Parent=audioParent
Index=38
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band39]
Measure=Plugin
Parent=audioParent
Index=39
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band40]
Measure=Plugin
Parent=audioParent
Index=40
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band41]
Measure=Plugin
Parent=audioParent
Index=41
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band42]
Measure=Plugin
Parent=audioParent
Index=42
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band43]
Measure=Plugin
Parent=audioParent
Index=43
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band44]
Measure=Plugin
Parent=audioParent
Index=44
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band45]
Measure=Plugin
Parent=audioParent
Index=45
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band46]
Measure=Plugin
Parent=audioParent
Index=46
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band47]
Measure=Plugin
Parent=audioParent
Index=47
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band48]
Measure=Plugin
Parent=audioParent
Index=48
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band49]
Measure=Plugin
Parent=audioParent
Index=49
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band50]
Measure=Plugin
Parent=audioParent
Index=50
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band51]
Measure=Plugin
Parent=audioParent
Index=51
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band52]
Measure=Plugin
Parent=audioParent
Index=52
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band53]
Measure=Plugin
Parent=audioParent
Index=53
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band54]
Measure=Plugin
Parent=audioParent
Index=54
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band55]
Measure=Plugin
Parent=audioParent
Index=55
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band56]
Measure=Plugin
Parent=audioParent
Index=56
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band57]
Measure=Plugin
Parent=audioParent
Index=57
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band58]
Measure=Plugin
Parent=audioParent
Index=58
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band59]
Measure=Plugin
Parent=audioParent
Index=59
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band60]
Measure=Plugin
Parent=audioParent
Index=60
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band61]
Measure=Plugin
Parent=audioParent
Index=61
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band62]
Measure=Plugin
Parent=audioParent
Index=62
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band63]
Measure=Plugin
Parent=audioParent
Index=63
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band64]
Measure=Plugin
Parent=audioParent
Index=64
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band65]
Measure=Plugin
Parent=audioParent
Index=65
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band66]
Measure=Plugin
Parent=audioParent
Index=66
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band67]
Measure=Plugin
Parent=audioParent
Index=67
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band68]
Measure=Plugin
Parent=audioParent
Index=68
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band69]
Measure=Plugin
Parent=audioParent
Index=69
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band70]
Measure=Plugin
Parent=audioParent
Index=70
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band71]
Measure=Plugin
Parent=audioParent
Index=71
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band72]
Measure=Plugin
Parent=audioParent
Index=72
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band73]
Measure=Plugin
Parent=audioParent
Index=73
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band74]
Measure=Plugin
Parent=audioParent
Index=74
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band75]
Measure=Plugin
Parent=audioParent
Index=75
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band76]
Measure=Plugin
Parent=audioParent
Index=76
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band77]
Measure=Plugin
Parent=audioParent
Index=77
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band78]
Measure=Plugin
Parent=audioParent
Index=78
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band79]
Measure=Plugin
Parent=audioParent
Index=79
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band80]
Measure=Plugin
Parent=audioParent
Index=80
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band81]
Measure=Plugin
Parent=audioParent
Index=81
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band82]
Measure=Plugin
Parent=audioParent
Index=82
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band83]
Measure=Plugin
Parent=audioParent
Index=83
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band84]
Measure=Plugin
Parent=audioParent
Index=84
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band85]
Measure=Plugin
Parent=audioParent
Index=85
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band86]
Measure=Plugin
Parent=audioParent
Index=86
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band87]
Measure=Plugin
Parent=audioParent
Index=87
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band88]
Measure=Plugin
Parent=audioParent
Index=88
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band89]
Measure=Plugin
Parent=audioParent
Index=89
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band90]
Measure=Plugin
Parent=audioParent
Index=90
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band91]
Measure=Plugin
Parent=audioParent
Index=91
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band92]
Measure=Plugin
Parent=audioParent
Index=92
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band93]
Measure=Plugin
Parent=audioParent
Index=93
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band94]
Measure=Plugin
Parent=audioParent
Index=94
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band95]
Measure=Plugin
Parent=audioParent
Index=95
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band96]
Measure=Plugin
Parent=audioParent
Index=96
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band97]
Measure=Plugin
Parent=audioParent
Index=97
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band98]
Measure=Plugin
Parent=audioParent
Index=98
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1

[band99]
Measure=Plugin
Parent=audioParent
Index=99
Channel=Auto
ValueId=mapper
NumberTransform=Linear
AverageSize=1
Plugin=AudioAnalyzer_1_1