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
    printf("x = %u = %d\n", x, x);  ///< T2U_32(-1)=UMax_32=2^32-1
    printf("u = %u = %d\n", u, u);  ///< U2T_32(2^31)=2^31-2^32=TMin_32
}

void
C_P53() {
    printf("%d\n", 0 == 0u);
    printf("%d\n", -1 < 0);
    printf("%d\n", -1 < 0u);  ///< Forced type casting (implicit)
    printf("%d\n", 2147483647 > -2147483647 - 1);
    printf("%d\n", 2147483647u > -2147483647 - 1);   ///< Forced type casting (implicit)
    printf("%d\n", 2147483647 > (int) 2147483648u);  ///< Forced type casting (implicit)
    printf("%d\n", -1 > -2);
    printf("%d\n", (unsigned) -1 > -2);
}

void
C_P54() {
    short          sx  = -12345;  ///< c7 cf
    unsigned short usx = sx;      ///< c7 cf
    int            x   = sx;      ///< c7 cf ff ff
    unsigned       ux  = usx;     ///< c7 cf 00 00

    printf("sx  = %d:\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));
    printf("usx = %u:\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(unsigned short));
    printf("x   = %d:\t", x);
    show_bytes((byte_pointer) &x, sizeof(int));
    printf("ux  = %d:\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(unsigned));
}

void
C_P56() {
    int   x  = 53191;      ///< 53191
    short sx = (short) x;  ///< -12345
    int   y  = sx;         ///< -12345

    printf("x  = %d:\t\t", x);
    show_bytes((byte_pointer) &x, sizeof(int));
    printf("sx = %d:\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));
    printf("y  = %d:\t", y);
    show_bytes((byte_pointer) &y, sizeof(int));
}
