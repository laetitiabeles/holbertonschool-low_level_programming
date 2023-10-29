#include "main.h"
#include <stdio.h>

/**
* _atoi - entry point
* @s: caractere a convertir en entier
* Return: valeur numérique de la chaine
*/

int _atoi(char *s)
{
	int result = 0;
	int signe = 1; /* signe du nombre */
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '+')
		{
			i++;
		}
		else if (s[i] == '-')
		{
			signe = -1;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}
	return ((result * signe));
}

