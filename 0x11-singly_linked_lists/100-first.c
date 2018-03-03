#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* Apply the constructor attribute to myStartupFun() so that it
    is executed before main() */
void myStartupFun (void) __attribute__ ((constructor));

void myStartupFun (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
