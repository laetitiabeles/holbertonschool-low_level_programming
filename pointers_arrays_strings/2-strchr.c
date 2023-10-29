#include "main.h"
#include <stddef.h>

/**
*_strchr - locates a character in a string
*@s: string
*@c: character
*
*Return: first occurrence or NULL
*/

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
