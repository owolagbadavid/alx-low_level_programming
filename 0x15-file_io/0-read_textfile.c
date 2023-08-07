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
	int fd = 0, reader = 0, writer = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	writer = write(1, buffer, reader);
	if (writer == -1 || writer != reader)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (writer);
}
