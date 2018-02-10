#include "stdio.h"

/**
 * main - program to print out number of arguments
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{
        int count, sum, alpha;

        sum = 0;
        if (argc < 1)
        {
            printf("0");
        }
        for (count = 1; count < argc; count++)
        {
            if (*argv[count] > 47 && *argv[count] < 58)
            {
                sum += atoi(argv[count]);
            }
            else
            {
                printf("Error\n");
                return (1);
            }
            
        }
        printf("%d\n", sum);

    return (0);
}
