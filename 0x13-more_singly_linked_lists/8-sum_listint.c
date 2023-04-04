#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all the data
 * @head: pointer to the first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
