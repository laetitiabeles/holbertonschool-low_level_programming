#include "main.h"

/**
* factorial - calculates the factorial of a number
* @n: The number to calculate
*
* Return: factorial of n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
