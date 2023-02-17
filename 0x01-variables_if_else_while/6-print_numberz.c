# include <stdio.h>
/**
 * main - numberz
 * Description: using putchar
 * Return: success (0)
 */
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
