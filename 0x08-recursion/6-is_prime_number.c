# include "main.h"
/**
 * is_prime_number - Returns 1 if it is a prime
 * @n: value to be aanalysed
 * Return: integer 0 or 1
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
		return (1);
	else if (num % i == 0)
		return (0);
	i = i - 1;
	is_prime_number(n);
}

