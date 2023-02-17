# include <stdio.h>
/**
 * main - main entry
 * Description: lowercase reversed
 * Return: success (0)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
