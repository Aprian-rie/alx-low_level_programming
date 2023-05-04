#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: points to a string 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1;
	unsigned int decimal_result = 0;
	int binary_no = strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = binary_no - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal_result += power;
		power *= 2;
	}
	return (decimal_result);
}
