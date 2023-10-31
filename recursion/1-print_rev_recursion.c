#include "main.h"

/**
* _print_rev_recursion - writes a string in reverse with recursion
* @s: The string to print
*
* Return: Always 0
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
