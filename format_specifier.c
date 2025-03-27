#include "main.h"
/**
 * format_specifier - conversion des specifieurs
 * @format: format string
 * @args: argument list
 * @i: index dans le format string
 * Return: nombre de characters print
 */
int format_specifier(const char *format, va_list args, int *i)
{
int j, count = 0;

conversion_spe formats[] = {
{"c", print_char},
{"s", print_string},
{"%", print_modulo},
{NULL, NULL}	};

for (j = 0; formats[j].type_spec != NULL; j++)
{
	if (format[*i] == formats[j].type_spec[0])
	{
		count += formats[j].f(args);
		return (count);
	}
	else
	{
		putchar('%');
		_putchar(format[*i]);
		count += 2;
	}
}
return (count);
}
