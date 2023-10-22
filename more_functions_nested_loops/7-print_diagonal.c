#include "main.h"

/**
* print_diagonal - Entry point
* @n: number of \
* Description: program that print a line
* Return: always 0
*/

void print_diagonal(int n)
{

int slash;
int esp;

	if (n > 0)
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (esp = 1; esp < slash; esp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
