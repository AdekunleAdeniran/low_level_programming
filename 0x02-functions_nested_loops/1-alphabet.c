#include <holberton.h>

/**
 * print_alphabet - use only user defined variables to create output
 *
 * Description: Write program to print "a to z" using _putchar
 * Return: always success
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
