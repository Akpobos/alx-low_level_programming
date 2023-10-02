#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t c;
	char *ptr;

	if (!filename)
		return (0);
	ptr = malloc(sizeof(*ptr) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1 || !ptr)
		return (0);
	c = read(fd, ptr, letters);
	if (c == -1)
	{
		free(ptr);
		ptr = NULL;
		return (0);
	}
	close(fd);
	c = write(STDOUT_FILENO, ptr, c);
	free(ptr);
	ptr = NULL;
	return (c);
}
