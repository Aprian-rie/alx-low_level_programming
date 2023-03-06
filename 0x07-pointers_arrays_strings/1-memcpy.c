# include <stdio.h>
# include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination area
 * @src: Source area
 * @n: no of bytes
 * Return: Character
 */
char *_memcpy(char  *dest, char *src, unsigned int n)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
			*(dest++) = *(src++);
			--n;
		}
	}
	return (dest);
}
