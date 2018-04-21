#include "holberton.h"

/**
 * print_rev - change the values of ints
 * @s: char type
 * Description: take string and print to standard output
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	a--; /* read the output from the last and print it out*/
	while (s[a] != 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
