#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */

int main(int argc, char *argv[])
{
	int count, mul;

	mul = 1;
	if (argc >= 2)
	{
		for (count = 1; count <  argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
