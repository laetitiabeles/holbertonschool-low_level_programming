#include "main.h"

/**
* string_toupper - entry point
* @str: the string to convert
* Description: program that convert lower char in upper char
* Return: char
*/

char *string_toupper(char *str)

{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
