# _printf


This here repository contains a basic recreation of the **printf()** function from the C library. Our function will handle arguments by different format and print out the appropiate data. Enjoy your time here...

___

Format specifiers | Function name | Description
----------------- | ------------- | -----------
`%c`              | `p_char()`    | Prints a character
`%s`              | `p_str()`     | Prints a string
`%i`              | `p_int()`     | Prints an integer
`%d`              | `p_int()`     | Prints an integer
`%r`              | `p_reverse()` | Prints a string in reverse
`%R`              | `p_rot()`     | Prints a string in Rot13 format

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

### Who is responsible for this?

This code was written by [Kenneth Mensah](https://github.com/Ken-Mens) and [Marc Cavigli](https://github.com/MCavigli). We accept cash, checks, and venmo.
