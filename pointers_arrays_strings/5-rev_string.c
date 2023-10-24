#include "main.h"

/**
* rev_string - calcule la longueur d'une string
* @s: la string à calculer
* Description: program that print a string in reverse
* Return: always 0
*/

void rev_string(char *s)
{

	int i, t, tempo;

	for (t = 0; s[t] != '\0'; t++)
	{
		;
	}

	for (i = 0; i < t / 2; i++)
	{
		tempo = s[i];
		s[i] = s[t - 1 - i];
		s[t - 1 - i] = tempo;
	}

}
