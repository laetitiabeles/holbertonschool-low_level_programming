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

if (n >= 0)
{
_putchar(48 + last_d);
return (48 + last_d);
}
else
{
_putchar(48 - last_d);
return (48 - last_d);
}
return (last_d);
}
