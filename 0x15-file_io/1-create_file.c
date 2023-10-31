#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	ssize_t length = 0;  /* Change the type of length to ssize_t */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		write_count = write(fd, text_content, length);
	if (write_count == -1 || write_count != length)
	{
		close(fd);
		return (-1);
		}
	}

	close(fd);
	return (1);
}
