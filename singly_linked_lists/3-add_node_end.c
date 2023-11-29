#include "lists.h"
/**
* add_node_end - add a new node at the end
* @head: the beginning of the list
* @str: the string to duplice for the new node
* Return: the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
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
