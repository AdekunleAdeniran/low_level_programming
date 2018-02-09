#include "holberton.h"

/**
 * check_prime - check for number is prime
 * @a: int type
 * @b: int type
 * Return: always success
 */
int check_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if  (b % a == 0)
		return (0);
	else
		return  (check_prime(a + 1, b));
}

/**
 * is_prime_number - return prime number or not
 * @n: int type
 * Return: always success
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	return (check_prime(2,  n));
}
