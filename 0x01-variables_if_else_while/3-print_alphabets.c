#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice, followed by new line
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
