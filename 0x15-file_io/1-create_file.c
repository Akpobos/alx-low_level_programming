#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY, 0500);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
