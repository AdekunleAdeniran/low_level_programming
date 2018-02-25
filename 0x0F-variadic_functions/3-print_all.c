#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_int - function to print ints
 * @arg: va_list type
 * Return: always successful
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - function to print char
 * @arg: va_list type
 * Return: always successful
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_float - function to print floats
 * @arg: va_list type
 * Return: always successful
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function to print string
 * @arg: va_list type
 * Return: always successful
 */
void print_string(va_list arg)
{
	char *pr;

	pr = va_arg(arg, char*);
	if (pr == NULL)
	{
		pr = "(nil)";
	}
	printf("%s", pr);
}

/**
 * print_all - function to print all inputs
 * @format: const pointer to functionof type char
 * Return: always successful
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;
	char *seperator;

	pt types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", seperator);
				types[j].printer(arg);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
