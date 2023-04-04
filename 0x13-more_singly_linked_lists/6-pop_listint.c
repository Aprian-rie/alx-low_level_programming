#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: the pointer that points to a pointer
 * Return: head node data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_node_data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		head_node_data = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (head_node_data);
	}
}
