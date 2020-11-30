#pragma once

namespace automap_algorithm
{

    enum KEY_TYPE
    {
        STREAM = 0,
        JUMP_STREAM = 1,
        HAND_STREAM = 2,
        ALTER = 3,
        JUMP = 4,
        MINI_JACK = 5,
        CHORD_JACK = 6,
        JACK_STAMINA = 7,
    };

    // ����bpm, ���С��ʱ��
    double bpm2sectime(double bpm) { return 60 * 1000 / bpm; }
    // ����С��ʱ��m ���bpm
    double sectime2bpm(double sec_t) { return 60 * 1000 / sec_t; }
    // 
    bool is_hitobject_related();
};