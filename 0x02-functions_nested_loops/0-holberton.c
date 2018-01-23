#include "holberton.h"

/**
 * main - Entry Point.use only user defined variable to create output.
 *
 * Description: Print Holberton using predefined functions
 *
 * Return: 0
 */

int main(void)
{
	char h[] = "Holberton";
	int i = 0;

	while (i <= 9)
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
