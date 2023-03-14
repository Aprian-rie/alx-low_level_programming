#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: 1st arg
 * @av: 2nd arg
 * Return: Character
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		str[k++] = av[i][j];
		}
	}
	str[k++] = '\n';
	str[k] = '\0';
	return (str);
}
