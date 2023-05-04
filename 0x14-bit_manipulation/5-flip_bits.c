/**
 * flip_bits - returns number of flipped bits
 * @n: an integer
 * @m: an integer m
 * Return: no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
