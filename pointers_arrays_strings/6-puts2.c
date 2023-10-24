#include "main.h"

/**
* _strlen - prints the length of a string
* @str: la string à afficher
* Description: program that print a string
* Return: always 0
*/

int _strlen(char *str)
{
	int l = 0;

	for (; *str != '\0'; str++)
	{
		l++;
	}
	return (l);
}

/**
* puts2 - puts 1 char sur 2
* @str: la string à afficher
*/

void puts2(char *str)
{
	int i = 0;

	for (; i < _strlen(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
