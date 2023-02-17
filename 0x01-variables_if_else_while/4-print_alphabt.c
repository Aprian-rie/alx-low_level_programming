# include <stdio.h>
/**
 * main - while usage
 * Description: Print err except q and e
 * Return: success (0)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' ||  ch == 'q')
			ch = ch + 1;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
