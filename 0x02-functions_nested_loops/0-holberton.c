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
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');

	return (0);
}
