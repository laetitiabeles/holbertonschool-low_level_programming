#include "main.h"

/**
* print_alphabet - Entry point
* Description: program that print alphabet
* Return: always 0
*/

void print_alphabet(void)
{

char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');
}
