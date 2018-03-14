#include "holberton.h"
/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to file to be read
 * @letters: size_t type
 * Return: always successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdread, fdwrite, fdclose;
	char *space;

	if (filename == NULL)
		return (0);
	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, space, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, space, fdread);

	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
