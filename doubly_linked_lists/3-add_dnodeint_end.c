#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of linked list
 * @head: linked list
 * @n: node data
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	temp = *head;

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
