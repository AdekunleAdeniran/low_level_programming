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
        int count, sum;

        sum = 0;
       #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{
        int count, sum;

        sum = 0;

            if (argc > 1)
            {
                for (count = 1; count <  argc; count++)
                {
                    sum += atoi(argv[count]);
                }
                printf("%d\n", sum);
            }
            else
            {
                printf("0");
            }
        
        
        
  return (0);
}
           
