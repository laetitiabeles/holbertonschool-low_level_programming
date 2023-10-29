#include "main.h"

/**
*_memset - remplit des blocs de mémoire avec une valeur constante
*@s: pointeur vers la mémoire à remplir
*@b: valeur à utiliser pour le remplissage
*@n: valeur en bytes
*
*Return: char
*/

/* memset remplit une zone mémoire pointée par s avec la valeur b */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n == 0)
	{
		return (s);
	}

	while (i != n) /* tant que le compteur n'a pas la valeur n */
	{
		s[i] = b; /* la valeur b est copiée dans l'emplacement pointé */
		i++;
	}
	return (s);
}
