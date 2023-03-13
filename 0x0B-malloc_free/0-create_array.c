# include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the character
 * Return: null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
