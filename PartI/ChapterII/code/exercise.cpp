// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'test'.
// test.hpp achieve.
#include <iostream>
#include "exercise.hpp"

int
exercise_2_15(int x, int y) {
    if (!(x ^ y))  // Note that if(x^y) is true.
        return 1;
    else
        return 0;
}

/**
 * @brief Operation complete conversion to complement.
 * @param [in] word unsigned.
 * @return [out] int.
 */
int
fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

/**
 * @brief To complement and then to do the arithmetic.
 * @param [in] word unsigned.
 * @return [out] int.
 */
int
fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

int
exercise_2_23(const unsigned& word) {
    std::cout << "fun1 result: " << fun1(word) << "\n";
    std::cout << "fun2 result: " << fun2(word) << std::endl;
    return 0;
}
