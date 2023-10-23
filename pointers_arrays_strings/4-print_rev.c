#include "main.h"

/**
* print_rev - Entry point
* @s: pointeur
* Description: program that print a string in reverse
* Return: always 0
*/

void print_rev(char *s)
{

	int len = 0;
	int l;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;

	for (l = len; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
