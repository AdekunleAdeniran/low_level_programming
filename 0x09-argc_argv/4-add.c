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
	int count, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0");
	}
	for (count = 1; count < argc; count++)
	{
		if (*argv[count] > 47 && *argv[count] < 58)
		{
			sum += atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
