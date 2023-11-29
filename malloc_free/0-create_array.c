#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character to put
 *
 * Return: *char (array)
*/

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (size != 0)
	{
		array = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}