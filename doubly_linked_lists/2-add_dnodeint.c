#include "lists.h"

/**
* add_dnodeint - add a new node at list begining
* @head: list linked
* @n: int for the new node
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{
	(*head)->prev = newNode;
	}

	return (newNode);
}
