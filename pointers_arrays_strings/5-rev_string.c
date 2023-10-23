#include "main.h"

/**
* rev_string - Entry point
* @s: pointeur
* Description: program that print a string in reverse
* Return: always 0
*/

void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	int temp;

	while (s[l++])
	{
		len++;
	}

	for (l = len - 1; l >= len / 2; l++)
	{
		temp = s[l];
		s[l] = s[len - l - 1];
		s[len - l - 1] = temp;
	}
}
