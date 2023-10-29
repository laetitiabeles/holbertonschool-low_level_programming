#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes
*@s: string
*@accept: bytes
*
*Return: s or null
*/

char *_strpbrk(char *s, char *accept)
{

	for (; *s; s++)
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
