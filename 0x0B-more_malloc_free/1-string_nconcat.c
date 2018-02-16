#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
<<<<<<< HEAD
        int count, count1;
        int sign = n;
        char *ptr;
        int len1, len2;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        for (len1 = 0; s1[len1] != '\0'; len1++)
        ;
        for (len2 = 0; s2[len2] != '\0'; len2++)
        ;

        if(sign >= len2)
        {
               sign = len2;
               ptr = malloc(sizeof(char) * (len1 + len2 + 1));
        }
        else
                ptr = malloc(sizeof(char) * (len1 + n + 1));
        if (ptr == NULL)
                return NULL;
        for (count = 0; count < len1; count++)
        {
                ptr[count] = s1[count];
        }
        for(count1 = 0; count1 < sign; count1++)
        {
                ptr[count++] = s2[count1];
        }
        ptr[count++] = '\0';
        return (ptr);
=======
	int count, count1,size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
	{
		size = _strlen(s2);
		ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < _strlen(s1); count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < n; count1++)
	{
		ptr[count] = s2[count1];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
>>>>>>> a74eca29b01a96b8b784f22e7aabfa3fafe01827
}
