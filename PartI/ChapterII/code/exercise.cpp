// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'test'.
// test.hpp achieve.
#include "exercise.hpp"

int
exercise_2_15(int x, int y) {
    if (!(x ^ y))  // Note that if(x^y) is true.
        return 1;
    else
        return 0;
}
