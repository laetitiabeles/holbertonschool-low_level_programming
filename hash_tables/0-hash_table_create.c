#include "hash_tables.h"

/**
* hash_table_create - create an hash table
* @size: size of the table
* Return: new created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = malloc(sizeof(hash_table_t));

	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = calloc(size, sizeof(hash_node_t *));

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	return (newTable);
}
