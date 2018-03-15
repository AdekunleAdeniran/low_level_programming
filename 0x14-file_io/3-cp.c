#include "holberton.h"
/**
 * main - C program that copied file content from one to another
 * @argc: size of array argv and number of command line arguments
 * @av: An  array  of size argc
 * Return: Always successful
 */
int main(int argc, char *av[])
{
	int file1, file2, fileread, filewrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(av[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file2  = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do  {
		fileread = read(file1, buffer, 1024);
		if (fileread ==  -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		filewrite = write(file2, buffer, fileread);
		if (filewrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (fileread == 1024);

	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
