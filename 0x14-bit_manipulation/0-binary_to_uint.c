#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: the string that contains the binary numbers
 * Return: the decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result = result << 1;
			result += b[i] - '0';
		}
		else
			return (0);
	}
	return (result);
}
