#include "main.h"
/**
* print_char - print un char
* @args : argument
* Description (): print un char
* Return: 1
*/
int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	if (s != 0)
		_putchar(s);
return (1);
}
