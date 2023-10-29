#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring
*@s: pointeur vers la string que l'on souhaite analyser
*@accept: accepted characters
*
*Return: bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	for (; *s; s++)
	{
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s) /* compare le caractere pointe de accept et de s */
			{
				len++; /* indique une correspondance */
				break; /* sortie de boucle si correspondance trouvée */
			}
		}

	if ((accept[i]) == '\0') /* si aucune correspondance n'a été trouvée */
	{
		return (len);
	}

	}
	return (len);
}
