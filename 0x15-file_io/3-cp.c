#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{
	int _file_from, _file_to;
	char buf[BUFFER_SIZE];
	int _read, _write;

	if (argc != 3)
	{
		_error("Usage: %s file_from file_to\n", argv[0],97);
	}
	_file_from = open(argv[1], O_RDONLY);
	if (_file_from == -1)
	{
		_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (_file_to == -1)
	{
		_error("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((_read = read(_file_from, buf, BUFFER_SIZE)) > 0)
	{
		_write = write(_file_to, buf, _read);
		if (_write == -1)
		{
			_error("Error: Can't write to %s\n", argv[2], 99);
		}
		if (_write != _read)
		{
			_error("Error: Short write to %s\n", argv[2], 99);
		}
	}
	if (_read == -1)
	{
		_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(_file_from) == -1)
	{
		_error("Error: Can't close fd %d\n", argv[1], 100);
	}
	if (close(_file_to) == -1)
	{
		_error("Error: Can't close fd %d\n", argv[2], 100);
	}
	return (0);
}
