/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the value to be affected
 * @index: the position to replace
 * Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1ul << index);
	return (1);
}
