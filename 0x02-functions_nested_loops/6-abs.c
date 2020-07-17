#include "notrebloh.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @a: int type
 *
 * Return: return absolute value of integer
 */

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
