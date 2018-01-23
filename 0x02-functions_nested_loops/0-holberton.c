#include <holberton.h>

/**
 * main - Entry Point.use only user defined variable to create output.
 * Description: Print Holberton using predefined functions
 * Return: Always success
 */

int main(void)
{
	char h[] = "Holberton";
	int i;

	for (i = 0; i <= strlen(h); i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
