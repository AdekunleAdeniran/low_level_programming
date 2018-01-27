#include <stdio.h>

/**
 * main - print largest prime
 *
 * description: find the largest divisible number
 * Return: 0
 */

int main(void)
{
	long number;
	long divisor;

	number = 612852475143;

	for (divisor = 2; divisor < number; divisor++)
	{
		if (number % divisor == 0)
		{
			number /= divisor;
		}
	}
	printf("%ld\n", number);
	return (0);
}
