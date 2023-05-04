int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	bit = 1UL << index;
	*n = *n | bit;
	return (1);
}
