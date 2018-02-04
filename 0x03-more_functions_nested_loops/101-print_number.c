#include "holberton.h"
/**
 * print_number - function to print integers
 *
 * @n: int type
 * Return: return integer values
 */

void print_number(int n)
{
	int a, remainder, length, count;
	int m = n;
	int pcounter = 0;
	int power;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
	}
	for (length = 0; n != 0; length++)
	{
		n /= 10;
	}
	for (power = 1; pcounter < (length - 1); pcounter++)
	{
		power *= 10;
	}
	for (count = 0; count < length; count++)
	{
		a = m;
		if (m < 0)
			_putchar(((m / power) * -1) + '0');
		else
			_putchar((m / power) + '0');
		remainder = a % power;
		power /= 10;
		m = remainder;
	}
}
