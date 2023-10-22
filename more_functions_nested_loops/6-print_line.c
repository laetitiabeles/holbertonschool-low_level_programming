#include "main.h"

/**
* print_line - Entry point
* @n: number of _
* Description: program that print a line
* Return: always 0
*/

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
