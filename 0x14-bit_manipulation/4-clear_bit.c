/**
 * clear_bit - sets the value of a bit to 0
 * @index: the inddex
 * @n: the number
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << index);
	return (1);
}
