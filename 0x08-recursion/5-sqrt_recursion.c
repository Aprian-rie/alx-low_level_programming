# include "main"
/**
 * _sqrt_recursion - finds the square root
 * @n: the number to be evaluated
 * Return: square rooted
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
		int x = _sqrt_recursion(n - 1);

		if (x * x <= n)
		{
			return (x);
		}
			return (x - 1);
}
