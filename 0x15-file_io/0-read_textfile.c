#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads text file and prints to POSIX stdout
 * @filename: name of the file
 * @letters: specifies the number of letters to print
 * Return: number of printed characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int _read;
	int _write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	_read = read(fd, buf, letters);
	if (_read == -1)
	{
		close(fd);
		return (0);
	}
	_write = write(STDOUT_FILENO, buf, _read);
	if (_write == -1 || _write != _read)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (_write);
}
