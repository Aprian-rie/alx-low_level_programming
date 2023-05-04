/**
 * set_bit - sets the value of a bit to 1
 * @n: the integer
 * @index: the index
 * Return: the value
 */
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
