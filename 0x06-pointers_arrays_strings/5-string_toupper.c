# include <stdio.h>
# include "main.h"
/**
 * _toupper - converts all lowercase letters to uppercase
 * Return: A character
 */
char *string_toupper(char *s)
{
	for(; *s; s++)
		if(('a' <= *s) && (*s <= 'z'))
			*s = 'A' + (*s - 'a');
	return (s);
}
