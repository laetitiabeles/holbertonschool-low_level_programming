#include "main.h"
#include <stdlib.h>

/**
*_strstr - function that locates a substring
*@haystack: string dans laquelle on effectue la recherche
*@needle: substring
*Return: begin of located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int s = 0; /* stocke la valeur de la sous chaine */

	while (needle[s] != '\0') /* compte le nombre de caracteres dans needle */
	{
		s++;
	}

	while (*haystack)
	{
		int i = 0; /* sert à parcourir needle lors de la comparaison */

		for (; needle[i]; i++) /* parcours needle */
		{
			if (haystack[i] != needle[i]) /* compare le current char de haystack et needle */
			{
				break; /* signifie une divergence entre les deux strings */
			}
		}

		if (i != s) /* verifie si la longueur s est differente de l'index i */
		{ /* si c'est le cas ça veut dire que la comparaison n'a pas atteint la fin de la str */
			haystack++; 
		}
		else /* si i est égal à s */
		{
			return (haystack);
		}

	}
	return (NULL);
}
