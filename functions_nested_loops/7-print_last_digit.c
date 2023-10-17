#include "main.h"
#include <stdio.h>

/**
* print_last_digit - entry point
*
* @n: number to check
*
* Description: program that prints last digit
*
* Return: always 0 (success)
*/

int print_last_digit(int n)
{
int last_d = n % 10;

if (last_d < 0)
{
last_d = -last_d;
}
_putchar('0' + last_d);

return (last_d);
}
