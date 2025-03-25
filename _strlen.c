#include "main.h"
/**
* _strlen - parcours les strings
* @s: string
* Description (): parcours string
* Return:valeur 0
*/
int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
	i++;
}
return (i);
}
