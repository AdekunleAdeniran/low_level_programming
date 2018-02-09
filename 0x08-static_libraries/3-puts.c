#include "holberton.h"

/**
 * _puts - change the values of ints
 * @str: char type
 * Description: take string and print to standard output
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
