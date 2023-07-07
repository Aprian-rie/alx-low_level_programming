#include "main.h"
/**
 * print_binary - prints binary  representation of a number
 * @n: number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	i = n & 1;
	if (i == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
