# include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: to beswapped integer
 * @b: to be swapped integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
