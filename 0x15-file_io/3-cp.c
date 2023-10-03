#include "main.h"

/**
 * hndl_err - Prints error to STDOUT
 * @code: Error code to exit with
 * @which: Signifies file error is associated with
 * @fmt: Formatter
 *
 * Return: Nothing to return
 */
void hndl_err(int code, int which, char *fmt, ...)
{
	va_list argptr;
	int d;
	char *s;

	if (fmt == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	else
	{
		va_start(argptr, fmt);
		while (*fmt)
		{
			if (*fmt == 's')
			{
				s = va_arg(argptr, char *);
				if (which == 1)
				{
					dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
				}
				else
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
				}
				break;
			}
			if (*fmt == 'd')
			{
				d = va_arg(argptr, int);
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
				break;
			}
			fmt++;
		}
		va_end(argptr);
	}
	exit(code);
}

/**
 * main - Copy file from one file to another
 * @ac: Argument count
 * @av: Arguments pointer
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	ssize_t rc, wc, c1, c2;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		hndl_err(97, 0, NULL);
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2],
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
			);
	if (fd1 == -1 || fd2 == -1)
		hndl_err(fd1 == -1 ? 98 : 99, fd1 == -1 ? 1 : 2, "s", av[1]);
	rc = read(fd1, buffer, BUFFER_SIZE);
	while (rc > 0)
	{
		wc = write(fd2, &buffer, rc);
		if (wc == -1)
			hndl_err(99, 2, "s", av[2]);
		rc = read(fd1, buffer, BUFFER_SIZE);
	}
	if (rc == -1)
		hndl_err(98, 1, "s",  av[1]);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
		hndl_err(100, 0, "d", c1 == -1 ? fd1 : fd2);
	return (0);
}
