# include "main.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 * @s: a pointer
 *
 * Return: A character
 */
char *string_toupper(char *s)
{
	for ( ; *s; s++)
		if (('a' <= *s) && (*s <= 'z'))
			*s = 'A' + (*s - 'a');
	return (s);
}
