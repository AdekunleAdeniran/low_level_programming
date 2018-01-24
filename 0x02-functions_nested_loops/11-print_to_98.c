#include <stdio.h>

/**
 * print_below_98 - check for numbers below 98
 * @a: int type
 *
 *
 * Return: return all values including 98
 */

void print_below_98(int a)
{
	int c;

	for (c = a; c <= 98; c++)
	{
		if (c != 98)
			printf("%d, ", c);
		else
			printf("%d\n", c);
	}
}

/**
 * print_above_98 - check for numbers above 98
 * @d: int type
 *
 *
 * Return: return all values including 98
 */

void print_above_98(int d)
{
	int b;

	for (b = d;  b >= 98; b--)
	{
		if (b != 98)
			printf("%d, ", b);
		else
			printf("%d\n", b);
	}
}

/**
 * print_to_98 - check for numbers below 98
 * @n: int type
 *
 *
 * Return: return all values including 98
 */


void print_to_98(int n)
{
	if (n <= 98)
		print_below_98(n);
	else
		print_above_98(n);
}
