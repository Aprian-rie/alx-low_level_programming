# include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabets 10x
 * Description: Refer above
 * Return: 0 successful
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
