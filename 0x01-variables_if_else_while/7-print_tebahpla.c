#include <stdio.h>
/**
 * main - main block
 * Description: program that prints the lowercase alphabet in reverse
 * followed by new line
 * Return: 0
 */
int main(void)
{
char alpha;
for(alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
