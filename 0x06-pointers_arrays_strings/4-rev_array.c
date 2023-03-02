# include <stdio.h>
# include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: the number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
	}
}
