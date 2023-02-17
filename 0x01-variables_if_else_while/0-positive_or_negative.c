#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry point
 * Description: Printing positive negative and zero
 * Return: always 0 (Success)
 */
int main(void)
{
	/*This program prints +ve if n is + and -ve if n is - and 0 if it's zero */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
