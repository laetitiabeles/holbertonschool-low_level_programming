#include "lists.h"

/**
 * print_dlistint - print data from linked list
 * @h: given linked list
 * Return: linked list length
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t listLen = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		listLen++;
		h = h->next;
	}
	return (listLen);
}
