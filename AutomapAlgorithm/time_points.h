#pragma once
#include <string>


class TimePoints
{
    int start_time;             // ��ʼʱ��
    double time_per_section;    // ÿС��ʱ��
    enum EffectType
    {
        DEFAULT = 0,
        NORMAL = 1,
        SOFT = 2,
        DRUM = 3,
    }effect_type;               // ��Ч���
    int custom_effect;          // �Զ�����Ч(0=Ĭ��)
    int volume;                 // ����(0-100)
    enum TimelineType
    {
        GREEN,
        RED,
    }timeline_type;             // ʱ��������
    int KIAI_mode;              // 0-�ر� 1-����

    //TimePoints() {};
};