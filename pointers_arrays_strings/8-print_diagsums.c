#include <stdio.h>
#include "main.h"

/**
*print_diagsums - function that prints the sum of 2 diagonals
*@a: array
*@size: size of array
*
*Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int in = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i < (size * size))
	{
		sum1 += a[i];
		i = i + size + 1;
	}

	while (in < (size * size - 1))
	{
		sum2 += a[in];
		in = in + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
