#include "main.h"

/**
 * _strncpy - Copie une chaîne source dans une chaîne de destination
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: number of bytes
 * Return: Un pointeur vers la chaîne de destination (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
