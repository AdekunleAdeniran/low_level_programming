#include "holberton.h"

/**
 * _print_rev_recursion - reverse a string
 *
 * @s: pointer to string to be reversed
 * Return: return reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
