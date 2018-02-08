#include "holberton.h"

/**
 * factorial - find factorial of numbers;
 * @n: int type
 * Return: returns -1 if number less than zero, else return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
