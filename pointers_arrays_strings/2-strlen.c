#include "main.h"

/**
* _strlen - Entry point
* @s: pointeur de str
* Description: program that print the lenght of a string
* Return: always 0
*/

int _strlen(char *s)
{

	int lengh = 0;

	for (; *s != '\0'; s++)
	{
		lengh++;
	}
	return (lengh);
}
