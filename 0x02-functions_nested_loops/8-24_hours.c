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

	for (a = '0'; a <= '1'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	int e, f, g, h;

	for (e = '2'; e < '3'; e++)
	{
		for (f = '0'; f <= '3'; f++)
		{
			for (g = '0'; g <= '5'; g++)
			{
				for (h = '0'; h <= '9'; h++)
				{
					_putchar(e);
					_putchar(f);
					_putchar(':');
					_putchar(g);
					_putchar(h);
					_putchar('\n');
				}
			}
		}
	}
}
