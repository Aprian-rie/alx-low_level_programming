#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Using the function write to display the words*/
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, str, sizeof(str) - 1);
	return (1);
}
