#include "lists.h"

/**
* dlistint_len - print length from linked list
* @h: given linked list
* Return: linked list length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t listLen = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		listLen++;
		h = h->next;
	}
	return (listLen);
}
