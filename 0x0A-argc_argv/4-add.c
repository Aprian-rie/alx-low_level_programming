#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * argc: argument count
 * argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sumarr = 0;
	int sum = 0;

	sumarr = atoi(*argv);

	if (argc == 1)
		return (1);
	for (i = 1; i < argc; i++)
	{
		sum = sum + sumarr[i];
		printf("%d", sum);
	}
	return (0);
}
