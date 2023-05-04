/**
 * get_bit - returns the value of a bit at a given index
 * @n: the integer
 * @index: the index of the bit
 * Return: value at index
 */
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
