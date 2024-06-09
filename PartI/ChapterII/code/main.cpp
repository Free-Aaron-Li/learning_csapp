// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'main'.
// As a program entry point.
#include "show_endian.cpp"
#include "show_bytes.hpp"
#include "exercise.hpp"
#include "C_P.hpp"

/**
 * @brief Test: View machine byte sequence pattern.
 */
void
test_show_endian() {
    show_endian();
}

/**
 * @brief Byte representation of objects of different data types.
 * @param [in] val real-valued.
 */
void
test_show_bytes(int val) {
    int   ival = val;
    float fval = (float) val;
    int*  pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

/**
 * @brief Chapter Two exercises.
 */
void
test_exercise() {
    std::cout << exercise_2_15(-1, 1);
}

/**
 * @brief C_P test.
 */
void
test_C_P() {
    // C_P48();
    // C_P49();
    C_P52();
}

int
main() {
    // test_show_endian(); ///< 小端法
    // test_show_bytes(1234);   // d2040000 d2040000 8cc6fb6cfc7f000
    // test_exercise();
    test_C_P();
    return 0;
}