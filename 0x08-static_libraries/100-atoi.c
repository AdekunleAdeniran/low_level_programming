#include "holberton.h"
/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}


/**
 * _atoi - program to converst ASCII to integer
 * @s: pointer to array of character
 * Return: Always successful
 */

int _atoi(char *s)
{
	int digit;
	int count = 0;
	int sign = 1;
	unsigned int value = 0;
	unsigned int pos = 1;

	for (digit = 0; ((s[digit] < '0') || (s[digit] > '9')); digit++)
	{
		if (s[digit] == '-')
			sign *= -1;
	}
	for (; _isdigit(s[digit]); digit++)
	{
		count++;
	}
	while (count > 0)
	{
		value += ((s[digit - 1] - 48) * pos);
		pos *= 10;
		count--;
		digit--;
	}
	return (value * sign);
}
