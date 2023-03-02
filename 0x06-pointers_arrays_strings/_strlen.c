# include <stdio.h>
/**
 * _strlen - finds the string length
 * @s: The string to be counted
 * Return: The integer count
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return(count);
}
