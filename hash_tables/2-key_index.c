#include "hash_tables.h"

/**
* key_index - gives the index of a key
* @size: size of the array of the hash table
* @key: the key
* Return: index at which the key/value pair
* should be stored in the array of the hash table
*/

/* changer la description betty */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}