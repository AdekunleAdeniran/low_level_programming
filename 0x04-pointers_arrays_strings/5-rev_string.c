#include "holberton.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a, count;

	for (a = 0; s[a] != '\0'; a++)
	{
		count = 0;
		count += a;
	}
	return (count);
}

/**
 * rev_string - reverse given string
 *
 * @s: char type
 * Description: Reverses the string in memory
 * Return: void
 */

void rev_string(char *s)
{
	int a, length;
	char holder;

	a = 0;
	length = _strlen(s);
	while (length >= a)
	{
		holder = s[a];
		s[a] = s[length];
		s[length] = holder;
		length--;
		a++;
	}
}
