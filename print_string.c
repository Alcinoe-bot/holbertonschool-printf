#include "main.h"
/**
 * print_string - prints un string
 * @args: argument
 * Return: len = longeur de la string
 */
int print_string(va_list args)
{
char *s
s = va_args(args, int);
int i, len;

if (s == NULL)
{
	s = "(null)"
	len = _strlen(s)
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
}
else
{
	for (i = 0; i < len; i++)
	{
		len = _strlen(s)
		_putchar(s[i]);
	}
}
return (len);
}
