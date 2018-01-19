#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet with each letter on a new line
 * using putchar only twice
 * Return: 0
 */
int main(void)
{
        char alpha = 'a';
        
        while (alpha < 'z')
        {
                putchar(alpha);
                alpha++;
                putchar('\n');
        }
        return (0);
}
