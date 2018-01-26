#include "holberton.h"

/**
 * print_diagonal - print backslash diagonally
 * @n: int type
 *
 * Return: prints lines and space to the value of n
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
	if (n < 1)
		_putchar('\n');
}
