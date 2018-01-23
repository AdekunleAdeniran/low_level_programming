#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 * Return: all the minutes
 */

void jack_bauer(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '2')
	{
		b = '0';
		while (b <= '3')
		{
			c = '0';
			while (c <= '5')
			{
				d = '0';
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
