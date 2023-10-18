#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
* Description: program that print table of 9
*/

void times_table(void)
{
int num;
int m;
int prod;

	for (num = 0 ; num <= 9 ; num++)
	{
		_putchar('0');

		for (m = 1 ; m <= 9 ; m++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * m;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
}



