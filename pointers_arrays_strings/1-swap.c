#include "main.h"

/**
* swap_int - Entry point
* @a: pointeur de a
* @b: pointeur de b
* Description: program that swap 2 int
* Return: always 0
*/

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
