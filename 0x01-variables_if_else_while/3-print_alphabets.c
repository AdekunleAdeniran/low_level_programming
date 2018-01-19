#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice, followed by new line
 * Return: 0
 */
int main(void)
{
        char alpha;
        for (alpha = 'a'; alpha < 'z'; alpha++ )
        putchar(alpha);
        for (alpha = 'A'; alpha < 'Z'; alpha++ )
        putchar(alpha);
        putchar('\n');
        return (0);
}
