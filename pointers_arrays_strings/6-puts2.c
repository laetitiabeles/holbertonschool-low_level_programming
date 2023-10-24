#include "main.h"

/**
* puts2 - prints a string
* @str: la string à afficher
* Description: program that print a string
* Return: always 0
*/

void puts2(char *str)
{

	for (; *str != '\0'; str++)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}
