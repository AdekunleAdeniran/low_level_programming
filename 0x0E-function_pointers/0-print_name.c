#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: pointer of char type
 * @f: pointer to function
 * Return: Always successful
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
