#include "main.h"

/**
 * display_file_content - reads a text file and outputs the characters
 * @file: name of the file.
 * @char_count: number of characters to output.
 *
 * Return: number of characters outputted. If an error occurs, returns 0.
 */
ssize_t display_file_content(const char *file, size_t char_count)
{
	int file_descriptor;
	ssize_t read_count, write_count;
	char *buffer;

	if (!file)
		return (0);

	file_descriptor = open(file, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (char_count));
	if (!buffer)
		return (0);

	read_count = read(file_descriptor, buffer, char_count);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	close(file_descriptor);

	free(buffer);

	return (write_count);
}
