#include <stdio.h>
/**
 * main - program to print the file name
 * Description: print file name from which file is compiled from
 * Return: always a success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
