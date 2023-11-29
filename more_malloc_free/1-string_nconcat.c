#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, len3, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;

	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;

	if (n > len2)
		n = len2;

	len3 = len1 + n + 1;

	s3 = malloc(sizeof(char) * len3);

	if (s3 == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		s3[i] = s1[i];

	for (i = 0 ; i < n ; i++)
		s3[i + len1] = s2[i];

	s3[len3 - 1] = '\0';

	return (s3);
}