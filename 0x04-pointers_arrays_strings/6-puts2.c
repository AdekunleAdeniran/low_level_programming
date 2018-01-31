#include "holberton.h"
/**
 * puts2 - takes string and print the other
 *
 * @str: char type
 *
 * Return: every other string
 */

void puts2(char *str)
{
	int a;
	int counter;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
