_printf
Description
This project is a custom implementation of standard the _printf function in C, which handles variadic arguments and custom format specifiers. This version mimics the original function's behavior by supporting various format specifiers to display different types of data.

Requirements
Allowed editors: vi, vim, emacs

Compiled on Ubuntu 20.04 LTS using gcc

Code must adhere to Betty style

No global variables

No more than 5 functions per file

Function prototypes must be included in main.h

Limitations
This _printf function doesn't handle:

flag characters

field width

precision

length modifiers

Function prototype
int _printf(const char *format, ...);

Supported conversion specifiers
Specifier	Description
%c	Prints a character
%s	Prints a string
%%	Prints a percentage
%d	Prints an integer
%i	Prints an integer
Man page
Here is the link toward the man page of _printf function:

Man page of _printf
