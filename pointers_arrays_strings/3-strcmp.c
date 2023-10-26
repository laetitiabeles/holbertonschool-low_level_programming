#include "main.h"

/**
 * _strcmp - Compare 2 chaines de caracteres entre elles
 * @s1: Chaîne 1
 * @s2: Chaîne 2
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
