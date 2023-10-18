#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer
*
* Description: program that print hours and min
*
* Return: always 0
*/

void jack_bauer(void)
{
	int h1, h2, min1, min2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if ((h1 <= 1 && h2 <= 9) || (h1 <= 2 && h2 <= 3))
			{
				for (min1 = 0; min1 <= 5; min1++)
				{
					for (min2 = 0; min2 <= 9; min2++)
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(58);
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
