#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list again
 * @head: a pointer to a pointer that points the head of the node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
