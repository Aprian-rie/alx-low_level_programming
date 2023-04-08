/**
 * get_endianness - checks the endianess od a system
 * Return: 0 big endian and 1 little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	if (*c)
		return (1);
	else
		return (0);
}
