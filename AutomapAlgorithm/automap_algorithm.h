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

    // 输入bpm, 输出小节时间
    double bpm2sectime(double bpm) { return 60 * 1000 / bpm; }
    // 输入小节时间m 输出bpm
    double sectime2bpm(double sec_t) { return 60 * 1000 / sec_t; }
    // 
    bool is_hitobject_related();
};