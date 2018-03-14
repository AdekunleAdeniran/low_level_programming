#include "holberton.h"
/**
 * create_file - function that creates file
 * @filename: pointer to filename to be created of char const type
 * @text_content: string to be written into file
 * Return: always successfull
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, fdwrite;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}
	fdwrite = write(fd, text_content, length);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
