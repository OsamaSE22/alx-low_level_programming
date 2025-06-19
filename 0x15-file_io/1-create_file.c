#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - to create a file and write to it.
 * @filename: this is the name of the file.
 * @text_content: this is the text to be written to the file
 *
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		written = write(fd, text_content, strlen(text_content));
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
