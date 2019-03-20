# _printf


This here repository contains a basic recreation of the **printf()** function from the C library. Our function will handle arguments by different format and print out the appropiate data. Enjoy your time here...

___

Format specifiers | Function name | Description
----------------- | ------------- | -----------
`%c`              | `p_char(char c)`    | Prints a character
`%s`              | `p_str(va_list list)`     | Prints a string
`%i`              | `p_int(va_list list)`     | Prints an integer
`%d`              | `p_int(va_list list)`     | Prints an integer
`%r`              | `p_reverse(va_list x)` | Prints a string in reverse
`%R`              | `rot13(va_list list)`     | Prints a string in Rot13 format

___

### Prototype

`int _printf(const char *format, ...);`

___

### List of Files

File Name | Description
--------- | -----------
`_printf.c` | the main file that prints characters
`holberton.h` | header file
`type_check.c` | accesses struct and returns correct function
`p_char.c` | prints a character
`p_str.c` | prints a string
`p_int.c` | prints an integer
`_putchar.c` | the function used to actuall print a character
`reverse.c` | reverses a string
`p_rot13.c` | prints a string in Rot13 format
`man_3_printf` | the manual for _printf()
`README.md` | the document you're reading...

___
### How to Compile
The following is how we compiled our _printf functions to test before
pushing to Github.

`gcc -Wall -Werror -Wextra -pedantic *.c`
___

### Who is responsible for this?

This code was written by [Kenneth Mensah](https://github.com/Ken-Mens) and [Marc Cavigli](https://github.com/MCavigli). We accept cash, checks, and venmo.
