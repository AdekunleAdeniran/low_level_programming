#include "holberton.h"
/**
 * cap_string - capitalize words in a string
 * @s: pointer to an array of words
 *
 * Return: Return capitalized words
 */

char *cap_string(char *s)
{
	int a, b;

	char spec[13]  = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			  '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; spec[b] != '\0'; b++)
		{
			if (a == 0)
			{
				if (s[a]  >= 'a' && s[a] <= 'z')
				{
					s[a] = s[a] - 32;
				}
			}
			if (s[a] == spec[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
		}
	}
	return (s);
}
