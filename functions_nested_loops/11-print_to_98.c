#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print while n is not 98
* @n: number to check
* Description: program to print n while is not 98
* Return: Always 0.
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98 ; n++)
		{
		printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
	}
