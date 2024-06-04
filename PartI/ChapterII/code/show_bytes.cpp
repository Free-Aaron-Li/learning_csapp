// Copyright (c) 2024. aaron.
//
// This program is under the GPL-3.0 license.
// if you have not received it or the program has a bug, please let me know:
// <communicate_aaron@outlook.com>.

// This file is part of 'csapp' project.
// This program is called:'show_bytes'.
// Use cast to access and print byte representations of different program objects.

#include "show_bytes.hpp"

void
show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; ++i)
        printf("%.2x ", start[i]);
    printf("\n");
}

void
show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void
show_float(int x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void
show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
};