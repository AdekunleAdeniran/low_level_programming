#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints all possible combinations
 * of two-digit numbers ranging form 0-99
 * Should print two digits, seperated by space and comma,
 * NUmber should be ascending, pattersn must never repeat.
 * 00 01 and 01 00 are considered the same.
 * you can only use putchar 8 maximum times
 * Return: 0
 */
int main(void)
{
        int a, b, c, d;
        for (a = '0'; a <= '9'; a++)
        {
                for(b = '0'; b <= '9'; b++)
                {
                        for (c ='0'; c <= '9'; c++)
                        {
                                for(d = '0'; d <= '9'; d++)
                                {
                                        if (c >=a && b < d)
                                        {
                                        putchar(a);
                                        putchar(b);
                                        putchar(' ');
                                        putchar(c);
                                        putchar(d);
                                        putchar(',');
                                        putchar(' ');       
                                        }
                                        
                                }
                        }
                }
        }
        putchar('\n');
	return (0);
}
