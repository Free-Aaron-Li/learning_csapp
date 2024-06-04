// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'show_endian'.
// Determine byte ordering pattern

#include <iostream>

void
show_endian() {
    unsigned int i = 1;
    char*        c = (char*) &i;
    if (*c)  ///< if little endian, the first byte is 01
        printf("小端法\n");
    else  ////< if big endian, the first byte is 00
        printf("大端法");
}
