#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints alphabet
*
* Return: always 0 (success)
*/

int main(void)
{

char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{

putchar(ch);

}

for (ch = 'A' ; ch <= 'Z' ; ch++)
{

putchar(ch);

}

putchar('\n');

return (0);

}
