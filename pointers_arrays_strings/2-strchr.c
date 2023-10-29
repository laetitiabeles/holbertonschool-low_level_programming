#include "main.h"
#include <stddef.h>

/**
*_strchr - locates a character in a string
*@s: pointeur vers la string dans laquelle on souhaite localiser c
*@c: character
*
*Return: first occurrence or NULL
*/

char *_strchr(char *s, char c)
{
	for (; *s; s++) /* parcours les caractères de la chaîne pointée par s */
	{
		if (*s != c) /* vérifie que le caractère s n'est pas égal au c recherché */
		{
			continue;
		}
		else /* sinon si une occurence a été trouvée */
		{
			return (s); /* renvoie un pointeur vers la position de l'occurence */
		}
	}

	if (c == '\0') /* vérifie si c est NULL */
	{
		return (s);
	}

	return (NULL); /* si aucune correspondance n'a été trouvée */
}
