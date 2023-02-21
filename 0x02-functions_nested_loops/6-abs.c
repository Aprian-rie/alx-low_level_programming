#include <stdio.h>
/**
 *  _abs - absolute value
 *  Description: finds the absolute value
 *  @n: an integer
 *  Return: n the value
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
