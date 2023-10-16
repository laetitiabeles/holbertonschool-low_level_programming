#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all single digit starting from 0
*
* Return: always 0 (success)
*/

int main(void)
{

int n;

for (n = 0 ; n < 10 ; n++)
{

putchar('0' + n);

}

putchar('\n');

return (0);

}
