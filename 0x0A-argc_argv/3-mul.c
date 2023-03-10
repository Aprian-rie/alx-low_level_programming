# include <stdio.h>
# include <math.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @*argv: argument vector
 * Return: 0
 */
int main(int argc, int argv[])
{
	int mult = 1;

	if (argc == 1)
	{
		printf("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mult = mult * argv[i];
		return (mult);
	}
	return (mult);
}
