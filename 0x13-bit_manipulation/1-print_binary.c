#include "holberton.h"

/**
 * print_binary - function to convert number to binary
 * @n: unsigned long  int type;
 * Return: always successful
 */
void print_binary(unsigned long int n)
{
	unsigned int check = 1u << 10;

	if (n ==  0)
	{
		_putchar('0');
		return;
	}
	while (check > 0)
	{
		if ((check & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		check >>= 1;
	}
}
