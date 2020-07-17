#include "notrebloh.h"

/**
 * _islower - checks if character is lowercase, return 1 is yes and 0 if not.
 * @c: is char type
 * Return: 1 if c is lower and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
