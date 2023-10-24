#include "main.h"

/**
* puts2 - prints a string
* @str: la string à afficher
* Description: program that print a string
* Return: always 0
*/

void puts2(char *str)
{
	int len = str[0];

	for (; len < '\0'; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		else
		{
			len++;
		}
	}
	_putchar('\n');
}
