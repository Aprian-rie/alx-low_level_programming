# include <stdio.h>
# include "main.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 * Return: A character
 * @s: the character to be converted
 */
char *string_toupper(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	return (s);
}
