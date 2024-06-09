// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called: 'C_P'.
// C_P.hpp implementation.

#include "C_P.hpp"

void
C_P48() {
    short x  = 123456;
    short mx = -x;

    show_bytes((byte_pointer) &x, sizeof(short));
    show_bytes((byte_pointer) &mx, sizeof(short));
}

void
C_P49() {
    // first
    short int      v  = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);

    // second

    unsigned u  = 4294967295u;  ///< UMax
    int      tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
}

void
C_P52() {
    int      x = -1;
    unsigned u = 2147483648;
    printf("x = %u = %d\n", x, x);
    printf("u = %u = %d\n", u, u);
}
