#include "main.h"
/**
 * print_string - prints un string
 * @args: argument
 * Return: len = longeur de la string
 */
int print_string(va_list args)
{
int i;
int len;
char *s;
s = va_arg(args, char *);

if (s == NULL)
	s = "(null)";

len = _strlen(s);

for (i = 0; i < len; i++)
{
	_putchar(s[i]);
}
return (len);
}
