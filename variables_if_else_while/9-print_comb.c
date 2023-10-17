#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints single digit numbers
*
* Return: always 0 (success)
*/

int main(void)
{

int n;

for (n = 0 ; n <= 9 ; n++)
{
putchar('0' + n);

if (n < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);

}
