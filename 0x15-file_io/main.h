#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * _error - prints error message
 * @msg: the intended message
 * @file: the filename
 * @code: the code for error
 * Return: nothing
 */
void _error(char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}
#endif
