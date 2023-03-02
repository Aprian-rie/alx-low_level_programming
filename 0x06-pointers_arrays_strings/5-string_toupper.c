# include <stdio.h>
# include "main.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 * Return: A character
 * @s: the character to be converted
 */
char *string_toupper(char *s)
{
	for (; *s; s++)
		if (('a' <= *s) && (*s <= 'z'))
			*s = 'A' + (*s - 'a');
	return (s);
}
