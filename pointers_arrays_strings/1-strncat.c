#include "main.h"

/**
* _strlen - entry point
* @dest: destination
* Description: program that concatenates two strings
* Return: char
*/

int _strlen(char *dest)
{

	int lengh = 0;

	for (; *dest != '\0'; dest++)
	{
		lengh++;
	}
	return (lengh);
}

/**
* _strncat - concatenates two strings
* @dest: destination
* @src: source
* @n: number of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int dest_len = _strlen(dest);

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
