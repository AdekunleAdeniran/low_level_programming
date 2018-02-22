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
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));

	return (0);
}
