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

	for (; *s; s++) /* parcours s */
	{
		int i;

		for (i = 0; accept[i]; i++) /* parcours accept */
		{
			if (accept[i] == *s) /* compare le caractere de accept et s */
			{
				return (s); /* si une correspondance est trouvée */
			}
		}
	}
	return ('\0'); /* si aucune correspondance n'est trouvée */
}
