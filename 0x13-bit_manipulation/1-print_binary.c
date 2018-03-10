#include "holberton.h"

/**
 * print_binary - function to convert number to binary
 * @n: unsigned long  int type;
 * Return: always successful
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;
	unsigned int size = sizeof(n) * 8;
	unsigned int count;
	unsigned int flag = 1;

	count = 0;
	while (count < size)
	{
		check = (n << 1);
		check >>= 1;
		if (n != check)
		{
			flag = 0;
			write(1, "1", 1);
		}
		else if (!flag)
		{
			write(1, "0", 1);
		}
		n <<=  1;
		count++;
	}
	if (flag == 1)
		write(1, "0", 1);
}
