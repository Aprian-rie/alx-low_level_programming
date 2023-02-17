# include <stdio.h>
/**
 * main - main entry
 * Description: 3 combo
 * Return: success
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if ((i != j) && (j != k) && (i !=k) && (k > j) && (j > i) && (k > i))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
