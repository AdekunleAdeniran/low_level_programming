#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to char string input
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int x;

	if (b == NULL)
		return (0);
	x = 0;
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[x] == '1')
		{
			count ^= check;
		}
		x++;
	}
	return (count);
}
