#include "main.h"
/**
 * _printf - print des characteres
 * @format: format de la chaine de caractere
 * Return: une chaine de caractere
 */
int _printf(const char * const format, ...)
{
int j, i = 0;
int count = i;
va_list args;
conversion_spe formats[] = {{"%s", print_string}, {"%c", print_char},
{"%", print_modulo}, {NULL, NULL}};

va_start(args, format);

if (format == NULL)
	return (-1);

while (format[i] != '\0')
{
	if (format[i] == '%')
	{
		for (j = 0; formats[j].type_spec != NULL; j++)
		{
			i++;
			if (strncmp(&format[i], formats[j].type_spec, 1) == 0)
			{
				count += formats[j].f(args);
				break;
			}
			else if (formats[j].type_spec == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
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
