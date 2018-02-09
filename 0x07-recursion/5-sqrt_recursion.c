#include "holberton.h"

/**
 * if_natural_square - check if a has natural square
 * @a: int type
 * @b: int type
 * Return: return success
 */
int if_natural_square(int a, int b)
{
	if (a == (b * b))
		return (b);
	if (b  * b  >  a)
		return (-1);
	return (if_natural_square(a, b + 1));
}

/**
 * _sqrt_recursion - check if number has natural sqrt
 * @n: int type
 * Return: return success
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (-1);
	return (if_natural_square(n, 1));
}
