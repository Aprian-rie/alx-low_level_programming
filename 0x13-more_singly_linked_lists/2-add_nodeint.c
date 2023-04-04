#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer pointing to the head of the node
 * @n: integer
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	while (ptr != NULL)
	{
		ptr->next = *head;
		ptr->n = n;
		*head = ptr;
		return (*head);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (*head);
	}
}
