#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * main - copies content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int _file_from, _file_to, _read, _write;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	_file_from = open(argv[1], O_RDONLY);
	if (_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((_read = read(_file_from, buf, BUFFER_SIZE)) > 0)
	{
		_write = write(_file_to, buf, _read);
		if (_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (_write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Short write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file_from);
		exit(100);
	}
	if (close(_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file_to);
		exit(100);
	}
	return (0);
}
