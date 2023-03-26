#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name
 * @f: the function
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
