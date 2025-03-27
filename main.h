#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int format_specifier(const char *format, va_list args, int *i);
int print_char(va_list args);
int print_modulo(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);

/**
 * struct format - correspondre les specificateurs de conversion pour printf
 * @type_spec: type char pointeur du specificateur pour (d, i, u, o, x, X)
 * @f: pointeur de type vers la fonction pour la conversion du specificateur
 *
 */
typedef struct format
{
	char *type_spec;
	int (*f)(va_list args);
}
conversion_spe;
#endif
