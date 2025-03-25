_printf.c

#include "main.h"
/**
 * printf - print des characteres
 * @format: format de la chaine de caractere
 * Return: une chaine de caractere
 */

int _printf(const char * const format, ...)
{
conversion_spe[] = {{"%s", print_string}, {"%c", print_char}, {"%%", print_modulo}};

va_list args;
int i;

va_start(args, format);

if (format == NULL)
	return (-1);

/**
 * boucle while ou for
 */
