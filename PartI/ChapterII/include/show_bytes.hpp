// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'show_bytes'.
// Use cast to access and print byte representations of different program objects.
#ifndef CSAPP_SHOW_BYTES_HPP
#define CSAPP_SHOW_BYTES_HPP

#include <iostream>
typedef unsigned char *byte_pointer;

/**
 * @brief Print byte representations of objects of different data types.
 * @param [in] start Pass in a pointer that looks like a sequence of characters.
 * @param [in] len Pass in variables length.
 */
void
show_bytes(byte_pointer start, size_t len);

/**
 * @brief Integer byte representations.
 * @param [in] x Pass in a integer variables.
 */
void
show_int(int x);

/**
 * @brief Float byte representations.
 * @param [in] x Pass in a float variables.
 */
void
show_float(int x);

/**
 * @brief Pointer byte representations.
 * @param [in] x Pass in a void * pointer variables.
 */
void
show_pointer(void *x);
#endif  // CSAPP_SHOW_BYTES_HPP
