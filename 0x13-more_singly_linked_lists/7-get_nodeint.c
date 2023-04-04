#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t
 * @head: pointer pointing to the 1st node
 * @index: position of the node starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	if (count == index)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
