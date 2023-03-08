# include "main.h"
/**
 * _sqrt_recursion - finds the square root
 * @n: the number to be evaluated
 * Return: square rooted
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n == 0 || n == 1 || n < 0){
		return (n);
	}
		 x = _sqrt_recursion(n - 1);

		if (x * x <= n)
		{
			return (x);
		}
			return (x - 1);
}
