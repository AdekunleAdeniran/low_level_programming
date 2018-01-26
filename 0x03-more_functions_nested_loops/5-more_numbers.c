#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
