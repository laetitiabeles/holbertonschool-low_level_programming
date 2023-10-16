#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints alphabet without q and e
*
* Return: always 0 (success)
*/

int main(void)
{

char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{

if (ch != 'q' && ch != 'e')
{

putchar(ch);

}

}

putchar('\n');

return (0);

}
