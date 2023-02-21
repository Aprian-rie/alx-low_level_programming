#include <stdio.h>
/**
 * print_sign - prints sign of a number
 * Description: Self explanatory
 * @n: any character
 * Return: 0 success
 */
int print_sign(int n)
{
	int sign; 

	if (n > 0)
	{
		putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		sign = 0;
	}
	else
	{
		putchar('-');
		sign = -1;
	}
	return sign;
}
