#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer of a pointer
 * @index: index to be deleted
 * Return: 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *before = NULL;

	if (ptr == NULL)
	{
		return (-1);
	}
	while (ptr != NULL && index > 0)
	{
		before = ptr;
		ptr = ptr->next;
		index--;
	}
	if (index > 0)
	{
		return (-1);
	}
	if (before == NULL)
	{
		*head = ptr->next;
	}
	else
	{
		before->next = ptr->next;
	}
	free(ptr);
	return (1);
}
