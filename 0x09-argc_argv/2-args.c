#include <stdio.h>
/**
 * main - program to print arguments on a new line
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count <  argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
