#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
