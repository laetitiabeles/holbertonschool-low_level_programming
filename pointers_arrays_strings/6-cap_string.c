#include "main.h"

/**
* cap_string - entry point
* @str: string to check
* Description: program that capitalizes all first letter of a string
* Return: char
*/

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}'))
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
