#include "stdio.h"
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print numbers
 * @separator: const char type pointer to string between numbers
 * @n: const unsigned int type
 * Return: Always successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d",  va_arg(va, int));
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
