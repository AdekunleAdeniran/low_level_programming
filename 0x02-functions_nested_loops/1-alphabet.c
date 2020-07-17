#include "notrebloh.h"

/**
 * print_alphabet - use only user defined variables to create output
 *
 * Description: Write program to print "a to z" using _putchar
 * Return: always success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
