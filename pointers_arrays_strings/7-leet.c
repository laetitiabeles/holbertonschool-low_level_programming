#include "main.h"

/**
*leet - function that encodes a string into 1337
*@p: string
*
*Return: char
*/

char *leet(char *p)
{
	int lettres[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int chiffres[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, in;

	for (i = 0; p[i] != '\0'; i++)
	{
		for (in = 0; lettres[in] != '\0'; in++)
		{
			if (p[i] == lettres[in])
				p[i] = chiffres[in];
		}
	}
	return (p);
}
