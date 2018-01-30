#include "holberton.h"

/**
 * swap_int - change the values of ints
 * @str: char type
 *
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
