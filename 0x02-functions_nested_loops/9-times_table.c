# include <stdio.h>
#include "main.h"
/**
 * times_table - times
 * Descriptiion: Creating a times table
 * Return: 0 successful
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int mult;
		int j = 1;
		int Hn;
		int Ln;

		_putchar('0');
		while (j <= 9)
		{
			mult = i * j;
			if ((mult) > 9)
			{
				Hn = mult / 10;
				Ln = mult % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(Hn + '0');
				_putchar(Ln + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			j++;

		}
		_putchar('\n');
		i++;
	}
}

