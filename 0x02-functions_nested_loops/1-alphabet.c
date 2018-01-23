#include <holberton.h>

/**
 * print_alphabet - use only user defined variables fto create output
 *
 * Description: Write program to print "a to z" using _putchar
 * Return: always success
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
