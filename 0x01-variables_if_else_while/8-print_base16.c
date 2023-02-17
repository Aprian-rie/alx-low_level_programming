# include <stdio.h>
/**
 * main - main entry
 * Description: Hexadecimal
 * Return: success 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + (i % 16));
	}
	for (i = 0; i <= 5; i++)
	{
		putchar('a' + (i % 16));
	}
	putchar('\n');
	return (0);
}
