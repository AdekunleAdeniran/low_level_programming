#include "holberton.h"
/**
 * clear_bit - function to clearbit
 * @n: unsigned  long int type
 * @index: index to clear
 * Return:  1 if successful or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;
	unsigned int size = sizeof(n) * 8;

	if (*n == '\0')
		return (-1);
	if (index > size)
		return (-1);
	check <<= index;
	*n &= ~check;
	return (1);
}
