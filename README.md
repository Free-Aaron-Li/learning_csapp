# Learning CSAPP

## Briefly Introduces

This repository contains code implementations for textbook code reproduction, knowledge applications and exercises, and
homework.

All code is implemented in C++17 and uses gcc-cmake-ninja as the project toolchain. And this project completes all code
writing on [CLion](https://www.jetbrains.com/clion
).

## Project Folder Properties

The project structure is divided into parts(level1) and chapters(lever2).Each chapter is a subproject, and the following
folders exist in the subproject:

- `code`. Store main, header file implementation, etc.
- `include`. Store header files (homework, exercises, code reproduction, etc).
- `assets`. Store project resources, pictures, class diagrams, flow charts, etc.

## Header File Name Explanation

- `C_P.hpp`. It contains the book (《深入理解计算机系统 原书第3版》), the reproduction of the implementation code header
  file. Start with C_P, for example: `C_P52` is the code implementation on page 52. If you are using the original
  English version(*Computer System A Programmer's Perspective Third Edition*), the header file function comments also
  note the section in which it belongs.
- `exercise.hpp`.It contains the code that needs to be used in C/C++ language to solve the problem in this book (think).
  With "exercise" As a beginning, such as " exercise_2_5" means exercise 2.5.

## Additional

File full code styles are managed through ClangFormat, which can be viewed in detail by viewing
the [.clang-format](.clang-format) file.
