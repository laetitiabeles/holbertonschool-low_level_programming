#include "main.h"

/**
* _strlen_recursion - entry point
* @s: the string to calculate
* Description: program that prints the lenght of a string
*
* Return: lenght
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
