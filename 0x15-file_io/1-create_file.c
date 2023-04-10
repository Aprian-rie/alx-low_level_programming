#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: Null terminated string to write the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int _create;
	ssize_t _write;

	if (filename == NULL)
		return (-1);
	_create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (_create == -1)
		return (-1);
	if (text_content != NULL)
	{
		_write = write(_create, text_content, strlen(text_content));
		if (_write == -1 || (size_t) _write != strlen(text_content))
		{
			close(_create);
			return (-1);
		}
	}
	close(_create);
	return (1);
}
