#include "main.h"
# include <stdio.h>
/**
 * print_to_98 - reints to 98
 * Description: Prints from b to 98
 * @n: integers
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}	
	printf("%d\n", n);
}
