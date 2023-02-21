# include <stdio.h>
/**
 * main - Alphabets
 * Description: Prints the Alphabets
 * Return: 0 Success
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
