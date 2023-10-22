#include "main.h"

/**
* print_diagonal - Entry point
* @n: number of \
* Description: program that print a line
* Return: always 0
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
