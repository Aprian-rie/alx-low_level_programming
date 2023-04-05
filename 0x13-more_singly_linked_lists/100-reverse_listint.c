#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer that points to a pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *next_node = NULL;

	if (*head == NULL)
		return (NULL);
	next_node = (*head)->next;
	while (next_node != NULL)
	{
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
		next_node = (*head)->next;
	}
	(*head)->next = previous_node;
	return (*head);
}
