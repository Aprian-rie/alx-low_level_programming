#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st character
 * @s2: 2nd character
 * @n: unsigned int
 * Return: a character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (i = 0; i < n; i++)
		new_str[len1 + i] = s2[i];
	new_str[len1 + n] = '\0';
	return (new_str);
}
