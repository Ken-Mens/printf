
# 0x10. C - printf

This repository contains the files to create the printf function.

## General information

* Your code will be compiled this way:
  * $ gcc -Wall -Werror -Wextra -pedantic *.c
* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
* Our main files will include your main header file (holberton.h): #include holberton.h
* You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. 
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as printf

## Tasks

**TASK 0**

Write a function that produces output according to a format.

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  * c
  * s
  * %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

**TASK 1**

Handle the following conversion specifiers:

       * d
       * i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

**TASK 2**

* Create a man page for your function.
