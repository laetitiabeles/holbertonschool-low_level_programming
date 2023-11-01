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
* _strcat - concatenates two strings
* @dest: destination
* @src: source
* Return: dest
*/

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int dest_len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
