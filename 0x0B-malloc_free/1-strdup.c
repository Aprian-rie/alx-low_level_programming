# include <stdlib.h>
# include <string.h>
/**
 * _strdup - returns a pointer
 * @str:  a string
 * Return: null of str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}
