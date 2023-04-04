#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list again
 * @head: a pointer to a pointer that points the head of the node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, temp;

	if (head == NULL)
		return;
	ptr = *head;
	while (*head != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
