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
	int i = n - 1; /* index = size - 1 */
	int tempo;

	while (i < n) /* tant que l'index est inférieur à la size */
	{
		tempo = a[i]; /* temporaire prend la valeur de ai */
		a[i] = a[i - n + 1]; /* ai prend la valeur de l'array size - index */
		a[i - n + 1] = tempo;

		i++;
		n--;
	}
}
