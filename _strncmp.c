#include <stddef.h>
/**
 * _strncmp - somme des nombres
 * @s1: char*
 * @s2: char*
 * @n: taille
 * Return: 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
size_t i;

for (i = 0; i < n; i++)
{
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);

	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
return (0);
}
