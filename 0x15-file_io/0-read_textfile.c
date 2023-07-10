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
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(file_d, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	close(file_d);
	free(buffer);
	return (_write);
}
