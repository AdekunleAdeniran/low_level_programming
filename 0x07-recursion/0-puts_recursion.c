#include "holberton.h"

/**
 * _puts_recursion - recursion function to print string
 * @s: pointer of char type to input string
 * description: print a string without loops
 *
 * Return: Always success
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
