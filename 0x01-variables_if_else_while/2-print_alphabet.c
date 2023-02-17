# include <stdio.h>
/**
 * main - using putchar
 * Description: Using putchar to display letters
 * Return: 0 (success)
 **/
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
