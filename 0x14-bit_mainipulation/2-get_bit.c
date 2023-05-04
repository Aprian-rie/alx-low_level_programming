int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	bit = bit << index;
	if ((n & bit) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
