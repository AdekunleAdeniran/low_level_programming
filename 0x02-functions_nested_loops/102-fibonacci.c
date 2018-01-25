#include "stdio.h"

/**
 * main - prints the first 50 number
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long int fib1  = 0;
	long int fib2  = 1;
	long int fib3;
	int counter = 1;

	while (counter <= 50)
	{
		fib3 =  fib2 + fib1;
		counter++;
		printf("%ld", fib3);
		if (counter <= 50)
			printf(", ");
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
