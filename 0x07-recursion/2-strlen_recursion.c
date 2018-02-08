#include "holberton.h"

/**
 * _strlen_recursion - find length of a string
 * @s: pointer to string to be counted
 * Return: return count
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	else
		count = 1;
	return (count + _strlen_recursion(s + 1));
}
