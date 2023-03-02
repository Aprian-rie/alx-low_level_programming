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
	for (int i = 0; i < n / 2; i++)
	{
		int temp = *(a + i);
		*(a + 1) = arr[n - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
