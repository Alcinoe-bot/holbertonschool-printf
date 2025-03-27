#include "main.h"
/**
 * print_decimal - print integer
 * @args: argument
 * Return: nombre
 */
int print_decimal(va_list args)
{
int n = va_arg(args, int);
char buffer[12];
int i = 0, count = 0;
unsigned int num;

if (n < 0)
{
	_putchar('-');
	count++;
	num = -n;
}
else
	num = n;

do {
	buffer[i++] = (num % 10) + '0';
	num /= 10;
} while (num > 0);
	buffer[i] = '\0';

while (i--)
{
	_putchar(buffer[i]);
	count++;
}
return (count);
}
