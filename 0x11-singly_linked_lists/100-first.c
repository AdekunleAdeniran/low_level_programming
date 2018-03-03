#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * myStartupFun - function to run command before main function
 * Return: always successful
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
