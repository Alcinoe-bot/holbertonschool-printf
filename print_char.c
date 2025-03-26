#include "main.h"
/**
* print_char - print un char
* @args : argument
* Description (): print un char
* Return: 1
*/
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
