#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
 */
void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');

		a++;
	}
	_putchar('\n');
}
