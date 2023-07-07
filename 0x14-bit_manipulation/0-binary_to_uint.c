 #include <stdio.h>
#include <string.h>
/**
 ** binary_to_uint - converts a binary number to unsigned int
 ** @b: points to a string 0 and 1 chars
 ** Return: converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result += b[i] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
