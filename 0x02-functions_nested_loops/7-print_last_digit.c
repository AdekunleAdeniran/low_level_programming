#include "notrebloh.h"

/**
 * print_last_digit - selects the last digit of an integer
 * @n: int type
 *
 * Return: the absolute value of last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
		m = n % 10;
	else
		m = (n % 10) * -1;
	_putchar(m + '0');
	return (m);
}
