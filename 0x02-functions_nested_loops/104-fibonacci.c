#include <stdio.h>

/**
 * main - prints the first 98 number
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long fib1, fib1a, fib1b, fib2, fib2a, fib2b, fib3, fib3a, fib3b;
	long divi = 10000000000;

	fib1 = 0;
	fib2 = 1;
	int counter = 1;

	for (counter = 0; counter < 91; counter++)
	{
		fib3 =  fib2 + fib1;
		fib1 = fib2;
		fib2 = fib3;
		printf("%ld, ", fib3);
	}
	fib1a = fib1 / divi;
	fib1b = fib1 % divi;
	fib2a = fib2 / divi;
	fib2b = fib2 % divi;
	for (; counter < 98; counter++)
	{
		fib3a = fib1a + fib2a;
		fib3b = fib1b + fib2b;
		if (fib3b > divi)
		{
			fib3b = fib3b % divi;
			fib3a++;
		}
		if (counter != 97)
		{
			printf("%ld%ld, ", fib3a, fib3b);
			fib1a = fib2a;
			fib1b = fib2b;
			fib2a = fib3a;
			fib2b = fib3b;
		}
		else
			printf("%ld%ld\n", fib3a, fib3b);
	}
	return (0);
}
