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

for (n = 0 ; n <= 8 ; n++)
{
putchar('0' + n);
putchar(',');
putchar(' ');
}

putchar('9');

return (0);

}
