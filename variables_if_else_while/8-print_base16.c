#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all hexa
*
* Return: always 0 (success)
*/

int main(void)
{

int n;

for (n = 0 ; n <= 9 ; n++)
{

putchar('0' + n);

}

for (n = 10 ; n <= 15 ; n++)
{

putchar('a' + (n - 10));

}

putchar('\n');

return (0);

}
