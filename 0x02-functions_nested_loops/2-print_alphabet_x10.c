#include "holberton.h"

/**
 * print_alphabet_x10(void): print list of alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int d;

	for  (d = 0; d < 10; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
