#include "main.h"

/**
* print_numbers - entry point
*
* Description: program that print 0 to 9
*
* Return: Always 0
*/

void print_numbers(void)
{

int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}

	_putchar('\n');

}
