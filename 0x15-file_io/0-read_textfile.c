#include "main.h"
/**
 * read_textfile - reads a text file and prints to the POSIX output
 * @filename: the name of the file
 * @letters: number of letters
 * Return: numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, _read, _write;
	char buff[1024];

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	_read = read(file_d, buff, letters);
	if (_read == -1)
	{
		close(file_d);
		return (0);
	}
	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1 || _write != _read)
	{
		close(file_d);
		return (0);
	}
	close(file_d);
	return (_write);
}
