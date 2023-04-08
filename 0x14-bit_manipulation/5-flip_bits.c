/**
 * flip_bits - returns no of bits you'd need to flip to get from on no
 * @n: the first number
 * @m: the second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int result;

	result = n ^ m;
	while (result > 0)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
