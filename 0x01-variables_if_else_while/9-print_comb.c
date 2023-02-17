# include <stdio.h>
/**
 * main - main entry
 * Description: Comb
 * Return: 0 succesfull
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
