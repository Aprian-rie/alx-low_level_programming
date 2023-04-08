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
	int length = strlen(b);
	unsigned int weight = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				result = result + weight;
			}
		weight = weight * 2;
		}
		else
			return (0);
	}
	return (result);
}
