#include "holberton.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
