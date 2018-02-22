#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: size of array argv and number of command line arguments
 * @argv: An array of size argc
 * Return: Always successful
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	if (*argv[2] != '+'
		&& *argv[2] != '-'
		&& *argv[2] != '/'
		&& *argv[2] != '%'
		&& *argv[2] != '*')
	{
		printf("Error2\n");
		exit(99);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && *argv[3] == 0)
	{
		printf("Error3\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	printf("%d\n", operator(num1, num2));

	return (0);
}
