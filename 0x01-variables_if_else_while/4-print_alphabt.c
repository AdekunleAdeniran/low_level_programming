#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet on a line omitting e and q
 * using putchar only twice
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
if (alpha == 'e' || alpha == 'q')
alpha++;
}
putchar('\n');
return (0);
}
