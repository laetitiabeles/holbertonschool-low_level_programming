#include "main.h"

/**
* _strlen - Entry point
* @str: pointeur de str
* Description: program that print the lenght of a string
* Return: always 0
*/

int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
	{
		len++;
	}
	return (len);
}

/**
* puts_half - affiche la moitié de la string
* @str: la string a afficher
*/

void puts_half(char *str)
{
	int len = _strlen(str);
	int moitie = len / 2;
	int i;

	for (i = moitie; i < len; i++)
	{
		if (len % 2 != 0)
		{
			i = moitie - 1;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
