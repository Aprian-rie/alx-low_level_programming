#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return:converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int binary_value = 1;
	int i;
	unsigned int length;

	length = strlen(b);
	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				total = total + binary_value;
			}
			binary_value = binary_value * 2;
			return (total);
		}
		else
		{
			total = 0;
			return (total);
		}
	}
	return (total);
}
