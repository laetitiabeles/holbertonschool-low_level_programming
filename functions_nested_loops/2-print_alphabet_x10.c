#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description: program that print alphabet
* Return: always 0
*/

void print_alphabet_x10(void)
{

char c = 'a';
int i;

for (i = 0; i < 10; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
_putchar('\n');
}
}
}
