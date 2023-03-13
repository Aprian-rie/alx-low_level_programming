# include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the character
 * Return: null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (null);
	c = malloc(size * sizeof(char));
	return (c);
}
