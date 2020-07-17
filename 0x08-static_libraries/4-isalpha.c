#include "notrebloh.h"

/**
 * _isalpha - checks if character is letter, lowercase or uppercase
 * and return 1 if yes and 0 if no.
 *
 * @c: char type
 *
 * Return: 1 if c is letter, lowercase or uppercase
 * and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
