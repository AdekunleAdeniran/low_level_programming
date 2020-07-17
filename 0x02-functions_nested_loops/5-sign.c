#include "notrebloh.h"

/**
 * print_sign - check if n is +, - or 0
 *
 * @n: int type
 *
 * Return: 1 if n is > 0, 0 is zero and -1 if < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
