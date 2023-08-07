#include "main.h"

/**
 * read_textfile - func
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	reader = read(fd, buffer, letters);
	if (reader < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[reader] = '\0';
	close(fd);
	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (writer);
}
