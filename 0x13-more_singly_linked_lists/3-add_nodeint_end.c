#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head:  pointer pointing to the beginning of the node
 * @n: integer to be added
 * Return: address or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
