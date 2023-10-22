#include "main.h"

/**
* print_square - Entry point
* @size: number of #
* Description: program that print a square
* Return: always 0
*/

void print_square(int size)
{
int l;
int c;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
