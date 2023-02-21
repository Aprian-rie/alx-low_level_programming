# include <stdio.h>
#include <ctype.h>
/**
 * _islower - lower checker
 * @c: any character loweermor upper
 * Description: Checks if the letter is lowercase
 * Return: 0 successful
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	
	return (1);
}
