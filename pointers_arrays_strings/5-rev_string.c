#include "main.h"

/**
* _strlen - calcule la longueur d'une string
* @s: la string à calculer
* Description: program that print a string in reverse
* Return: always 0
*/

int _strlen(char *s)
{
	int len = 0;

		for (; *s != '0'; s++)
		{
			len++;
		}
	return (len);
}

/**
* rev_string - Entry point
* @s: pointeur
*/

void rev_string(char *s)
{

	int b = 0;
	int e = (_strlen(s) - 1);
	char tempo;

	while (b < e)
	{
		tempo = s[b];
		s[b] = s[e];
		s[e] = tempo;
		b++, e--;
	}

}
