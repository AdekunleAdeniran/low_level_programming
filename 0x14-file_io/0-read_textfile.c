#include "holberton.h"
/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to file to be read
 * @letters: size_t type
 * Return: always successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdread, fdwrite, fdclose;
	char *space;

	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		return (-1);
		free(space);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, space, letters);
	if (fdread == -1)
		return (0);
	fdwrite = write(STDOUT_FILENO, space, letters);
	if (fdwrite == -1)
		return (0);
	fdclose = close(fd);
	if (fdclose == -1)
		return (0);
	free(space);
	return (fdread);
}
