#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * cp - copy content from file to another file.
 * @argc: the number of arguments in the CLI.
 * @argv: it's an array of pointers to the arguments.
 *
 * Return: void.
 */
void cp(int argc, char *argv[])
{
	int fd, sz, fd2, written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((sz = read(fd, buf, 1024)) != 0)
	{
		if (sz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		written = write(fd2, buf, sz);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't close fd %d\n", fd2);
		exit(100);
	}

}

/**
 * main - check the code.
 * @argc: the number of arguments.
 * @argv: the array of pointers to each argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	cp(argc, argv);
	return (0);
}
