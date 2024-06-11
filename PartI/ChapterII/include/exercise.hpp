// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'test'.
// About CSAPP exercise problem-solving
#ifndef CSAPP_EXERCISE_HPP
#define CSAPP_EXERCISE_HPP

#include <iostream>

/**
 * @brief x==y is realized only by bit level and logic operation.
 * @param [in] x.
 * @param [in] y.
 * @return [out] True:1,FALSE:0.
 */
int
exercise_2_15(int x, int y);

/**
 * @brief Arithmetic and logical operations of complement.
 * @param [in] word unsigned number.
 * @return [out] fun1 and fun2 result string,int[status].
 * @see fun1()
 * @see fun2()
 */
int
exercise_2_23(const unsigned& word);

#endif  // CSAPP_EXERCISE_HPP
