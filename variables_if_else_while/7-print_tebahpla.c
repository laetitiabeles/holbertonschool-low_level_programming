#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints alphabet in reverse
*
* Return: always 0 (success)
*/

int main(void)
{

char ch;

for (ch = 'z' ; ch <= 'a' ; ch++)
{

putchar(ch);

}

putchar('\n');

return (0);

}
