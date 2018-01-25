#include <stdio.h>
/**
 * main - Program to sum integers
 *
 * Description: check for all natural numbers in range of
 * 3 and 5 and sum them
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 1024; a++)
	{

		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
