#include "main.h"
/**
 * printf - print des characteres
 * @format: format de la chaine de caractere
 * Return: une chaine de caractere
 */

int _printf(const char * const format, ...)
{
int i = 0;
va_list args;
conversion_spe format[] = {
{"%s", print_string},
{"%c", print_char},
{"%%", print_modulo},
{' ',  NULL},
{'\0', NULL}
			};

va_start(args, format);

if (format == NULL)
	return (-1);

while (format[i] != '\0')
{
	if (format[i] == '%' && format[i + 1] == 'c')
	{
		int print_char(va_list args);
	}
	else if (format[i] == '%' && format[i + 1] == 's')
	{
		int print_string(va_list args);
	}
	else if (format[i] == '%' && format[i + 1] == '%')
	{
		int print_modulo(void);
	}
	else
	{
		i++;
	}
}
return (0);
}
