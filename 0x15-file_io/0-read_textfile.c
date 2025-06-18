#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read and display chars on display.
 * @filename: the file name that is passed to read from.
 * @letters: number of bytes to be read.
 *
 * Return: number of letters it could read and write.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf;
	ssize_t written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[sz] = '\0';

	written = write(STDOUT_FILENO, buf, sz);
	if (written == -1 || written != sz)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);

	return (sz);
}
