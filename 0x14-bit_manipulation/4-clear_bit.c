/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number to be cleared
 * @index: the position to clear
 * Return: 1 if it worked and -1 if an error occured
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
