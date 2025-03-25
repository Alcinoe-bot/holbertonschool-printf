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
int print_char(va_list args);

/**
 * struct format - faire correspondre les specificateurs de conversion pour printf
 * @type_spec: type char pointeur du specificateur i.e (l, h) pour (d, i, u, o, x, X)
 * @f: pointeur de type vers la fonction pour la conversion du specificateur
 *
 */
typedef struct format
{
	char *type_spec;
	int (*f)();
}
conversion_spe;
#endif
