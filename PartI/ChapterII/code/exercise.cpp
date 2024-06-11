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
exercise_2_23(const unsigned &word) {
    std::cout << "fun1 result: " << fun1(word) << "\n";
    std::cout << "fun2 result: " << fun2(word) << std::endl;
    return 0;
}

/* WARNING: This is buggy code */
float
sum_elements(const float a[], unsigned length) {
    int   i;
    float result = 0;

    for (i = 0; i < length - 1; i++)
        result += a[i];
    return result;
}

void
exercise_2_25() {
    float a[] = {1, 2, 3, 4, 5};
    std::cout << "a Array element sum equals " << sum_elements(a, 0)
              << std::endl;  ///< when length=0,139 (interrupted by signal 11:SIGSEGV)
}

/* Determine whether string s is longer than string t */
/* WARNING: This function is buggy */
int
strlonger(char *s, char *t) {
    return strlen(s) - strlen(t) > 0;
}

void
exercise_2_26() {
    char str1[] = "hello, word.";
    char str2[] = "hello, world.";
    std::cout << "str1 length: " << strlen(str1) << ",\tstr2 length: " << strlen(str2)
              << ".\nstrlonger result: " << strlonger(str1, str2) << std::endl;
}
