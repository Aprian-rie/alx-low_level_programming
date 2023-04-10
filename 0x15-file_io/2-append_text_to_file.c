#include <fcntl.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends texta at the end of a file
 * @filename: name of the file'
 * @text_content: string added at the end of a file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _create;
	int _write;

	if (filename == NULL)
		return (-1);
	_create = open(filename, O_APPEND | O_WRONLY); 
	if (_create == -1)
		return (-1);
	if (text_content != NULL)
	{
		_write = write(_create,text_content, strlen(text_content));
		if (_write == -1)
		{
			close(_create);
			return (-1);
		}
	}
	close (_create);
	return (1);
}

