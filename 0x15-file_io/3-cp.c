#include "main.h"
#define BUFFER_SIZE 1024

/**
 * open_file - opens a file
 * @filename: the filename
 * @flags: description
 * @mode: integer
 * Return: file_d
 */
int open_file(char *filename, int flags, int mode)
{
	int file_d;

	file_d = open(filename, flags, mode);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(1);
	}
	return (file_d);
}
/**
 * close_file - closes the file
 * @file_d: file descriptor
 * Return: nothing
 */
void close_file(int file_d)
{
	if (close(file_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d);
		exit(1);
	}
}
/**
 * copy_file - copies the file
 * @from_file: from file name
 * @to_file: to file name
 * Return: nothing
 */
void copy_file(char *from_file, char *to_file)
{
	int fd_from, fd_to;
	ssize_t num_read;
	char buffer[BUFFER_SIZE];

	fd_from = open_file(from_file, O_RDONLY, 0);
	fd_to = open_file(to_file, O_RDWR | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH);
	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, num_read) != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
			exit(1);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(1);
	}
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - entry pont
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(1);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
