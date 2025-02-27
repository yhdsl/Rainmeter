; 全局变量
; 请使用设置面板进行设置
; 而非直接修改此文件

[Variables]
; 如果你不知道这是什么
; 请不要修改
; 仅调试时使用
; 该变量会暂停皮肤状态切换功能
DEBUG=0
; 该变量会翻转频谱显示
IsInvert=0

; 如果你不知道这是什么
; 请不要修改
; 切换至 KON 壁纸对应的皮肤 (K)
IsToggleToKON=1
; 切换至 默认 壁纸对应的皮肤 (S)
IsToggleToDefault=0

; 使用 12小时 制
TimeWith12=0
; 使用 24小时 制
TimeWith24=1

; 以下为经纬坐标
; 用于确认当前位置的天气
; 可以前往 https://open-meteo.com/en/docs 网站确认当前城市的大致位置
; 为了保证个人数据安全
; 请勿随意公开分享以下内容！
; 纬度
Latitude=
; 经度
Longitude=
; 时区
TimeZone=

; FB2K歌曲信息滚动参数
; 滚动速度
AnimationSpeed=32
; 起始等待时间
MarqueeBeginWait=3000
; 结束等待时间
MarqueeEndWait=1200

; 音乐频谱参数
; 频谱上升的时间
FFTAttack=50
; 频谱下降的时间
FFTDecay=100
; 频谱最低捕获频率
FreqMin=50
; 频谱最高捕获频率
FreqMax=20000
; 使用多长的过去数据进行平滑
AudioAverageSize=8
; 频谱最低显示数值
; 控制频谱在多少数值下消失
; 请注意这里会有浮点数误差
AudioLevel=0.001

; 如果你不知道这是什么
; 请不要修改
; 模糊状态响应电源变化
FrostedGlassType=None
FrostedGlassCorner=None

; Someday 系列皮肤字体颜色
SFontColor=255,255,255,255
