#include "main.h"

/**
 * _strcpy - Copie une chaîne source dans une chaîne de destination
 * @dest: Chaîne de destination
 * @src: Chaîne source
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
