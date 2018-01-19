#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
 int main(void)
 {
 int a;
 for (a = 0; a < 10; a++)
 {
 putchar( a + '0');
 if (a < 9)
 {
 putchar(',');
 putchar(' ');
 }
 }
 putchar('\n');
 return (0);
 }
