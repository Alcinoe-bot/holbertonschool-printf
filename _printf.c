#include "main.h"
/**
 * _printf - print des characteres
 * @format: format de la chaine de caractere
 * Return: une chaine de caractere
 */
int _printf(const char * const format, ...)
{
int i = 0, count = 0;
va_list args;

if (format == NULL)
	return (-1);

va_start(args, format);

while (format[i] != '\0')
{
	if (format[i] == '%')
	{
		i++;
		if (format[i] == '\0')
			return (-1);

		count += format_specifier(format, args, &i);
	}
	else
	{
		_putchar(format[i]);
		count++;
	}
i++;
}
va_end(args);
return (count);
}
