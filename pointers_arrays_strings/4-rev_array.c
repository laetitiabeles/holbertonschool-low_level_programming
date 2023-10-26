#include "main.h"

/**
* reverse_array - Entry point
* @a: array
* @n: number of elements
* Description: program that reverse an array
* Return: always 0
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int tempo;

	while (i < n / 2)
	{
		tempo = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tempo;

		i++;
		n--;
	}
}
