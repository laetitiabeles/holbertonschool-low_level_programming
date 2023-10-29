#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring
*@s: string
*@accept: accepted characters
*
*Return: bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				len++;
			}
		}
	}

	if ((accept[i]) == '\0')
	{
		return (len);
	}
	else
	{
		s++;
	}

	return (len);
}
