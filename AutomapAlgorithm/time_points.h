#pragma once
#include <string>


class TimePoints
{
    int start_time;             // 起始时间
    double time_per_section;    // 每小节时间
    enum EffectType
    {
        DEFAULT = 0,
        NORMAL = 1,
        SOFT = 2,
        DRUM = 3,
    }effect_type;               // 音效类别
    int custom_effect;          // 自定义音效(0=默认)
    int volume;                 // 音量(0-100)
    enum TimelineType
    {
        GREEN,
        RED,
    }timeline_type;             // 时间线类型
    int KIAI_mode;              // 0-关闭 1-开启

    //TimePoints() {};
};