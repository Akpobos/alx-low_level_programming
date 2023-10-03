#include "main.h"

/**
 * append_text_to_file - Appends a text to end of a file
 * @filename: name of file
 * @text_content: Text to append
 *
 * Return: Integera
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	w_count = write(fd, text_content, (sizeof(char) * strlen(text_content)));
	if (w_count == -1)
		return (-1);
	(void)close(fd);
	return (1);
}
