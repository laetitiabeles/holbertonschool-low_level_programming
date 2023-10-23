#include "main.h"

/**
* print_rev - Entry point
* @s: pointeur
* Description: program that print a string in reverse
* Return: always 0
*/

void print_rev(char *s)
{
	int rev;

	for (rev = *s - 1; rev >= 0; rev--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
