#include "main.h"

/**
* print_rev - Entry point
* @s: pointeur
* Description: program that print a string in reverse
* Return: always 0
*/

void print_rev(char *s)
{

	for (; *s != 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
