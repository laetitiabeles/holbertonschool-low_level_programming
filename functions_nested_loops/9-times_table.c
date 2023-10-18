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
		for (m = 0 ; m <= 9 ; m++)
		{

			prod = num * m;

			if (m == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}

				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
