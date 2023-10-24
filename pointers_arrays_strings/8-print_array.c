#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array - Entry point
* @a: pointeur de array
* @n: nombre de fois ou afficher array
* Description: program that print array
* Return: always 0
*/

void print_array(int *a, int n)
{
	int l = 0;

		for (; l < n; l++)
		{
			printf("%d", a[l]);

				if (l != n - 1)
				{
					printf(", ");
				}
		}
	printf("\n");
}
