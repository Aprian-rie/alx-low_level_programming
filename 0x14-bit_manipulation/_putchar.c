nclude <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: character to print
 * Return: on success 1
 * On error -1 is returned
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
