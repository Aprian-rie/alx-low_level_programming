#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints elements of a listint_t list
 * @h:  pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
