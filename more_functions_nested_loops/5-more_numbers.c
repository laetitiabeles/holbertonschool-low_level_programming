#include "main.h"

/**
* more_numbers - Entry point
* Description: program that print 10 times 0 to 14
* Return: always 0
*/

void more_numbers(void)
{

int num;
int c;

	for (c = 0; c <= 9; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
