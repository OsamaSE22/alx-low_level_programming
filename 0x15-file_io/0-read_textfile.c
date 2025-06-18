#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read and display chars on display.
 * @filename: the file name that is passed to read from.
 * @letters: number of bytes to be read.
 *
 * Retrun: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf;

	fd = open(filename, O_RDWR);
	buf = malloc(letters * sizeof(char));
	sz = read(fd, buf, letters);
	buf[sz] = '\0';

	write(STDOUT_FILENO, buf, letters);

	return (sz);
}
