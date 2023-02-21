# include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - alphabet checker
 * Description: Checks for alphabetic character
 * @c: Any character
 * Return: 0 Success
 */
int _isalpha(int c)
{
	if (islower(c) == 0 && isupper(c) == 0)
		return (0);
	return (1);
}
