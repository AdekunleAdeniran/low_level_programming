#include <stdio.h>

/**
 * main - prints the first 98 number
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	double fib1  = 1;
	double fib2  = 2;
	double fib3;
	int counter = 3;

	printf("%.0f, ", fib1);
	printf("%.0f, ", fib2);
	while (counter <= 98)
	{
		fib3 =  fib2 + fib1;
		counter++;
	printf("%.0f", fib3);
		if (counter <= 98)
			printf(", ");
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
