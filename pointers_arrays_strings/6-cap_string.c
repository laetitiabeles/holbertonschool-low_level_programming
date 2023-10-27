#include "main.h"

/**
* cap_string - entry point
* @str: string to check
* Description: program that capitalizes all first letter of a string
* Return: char
*/

char *cap_string(char *str)
{
	int i = 1;

	for (; str[i] != '\0' ; str[i]++)
	{
		for (; str[i] >= 'a' && str[i] <= 'z' ; i++)
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}')
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}
	return (str);
}
