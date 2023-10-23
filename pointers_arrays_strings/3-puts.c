#include "main.h"

/**
* _puts - Entry point
* @str: pointeur
* Description: program that print a string
* Return: always 0
*/

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
