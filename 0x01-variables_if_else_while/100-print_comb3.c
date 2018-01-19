#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
int a;
int b;
int c;
for (a = 0; a < 100; a++)
{
b = a % 10; /* singles digit */
c = a / 10; /* doubles digit */
if (b < c)
{
putchar(b + '0');
putchar(c + '0');
        
if (a < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
