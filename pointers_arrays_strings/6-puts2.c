#include "main.h"

/**
* puts2 - prints a string
* @str: la string à afficher
* Description: program that print a string
* Return: always 0
*/

void puts2(char *str)
{
	int i = 0;
	
	for (; *str < '\0'; str++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}
