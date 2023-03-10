# include "main.h"
#include <stdio.h>
/**
 * main - prints the name
 * @argc: argument count
 * @argv: argument vector
 * Return: None
 */
int main(int argc, char* argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
