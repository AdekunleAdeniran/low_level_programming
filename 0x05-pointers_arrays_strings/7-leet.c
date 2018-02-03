#include "holberton.h"

/**
 * leet - replace letters with numbers
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *leet(char *s)
{
	int a, b;

	char test[] = "aeotl";
	char test1[] = "AEOTL";
	char res[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; test[b] !=  '\0' && test1[b] != '\0'; b++)
		{
			if (s[a] == test[b] || s[a] == test1[b])
			{
				s[a] = res[b];
			}
		}
	}
	return (s);
}
