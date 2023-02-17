# include <stdio.h>
# include <ctype.h>
/**
 * main - toupper
 * Description:Converts to uppercase
 * Return: success (0)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(toupper(ch));
	putchar('\n');
	return (0);
}
