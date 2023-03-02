# include <stdio.h>
# include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: 1st parameter to be compared
 * @s2: 2nd parameter to be compared
 * Return: A value either positive negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		i++;
	}
	return (0);
}
