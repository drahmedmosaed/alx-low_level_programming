#include "main.h"
/**
 * *cap_string: capitalize the first char of each word
 * @s: the string
 * Return: the string
 */
char *cap_string(char *s)
{
	char sep[13] = {' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};

	int i, y;

	for (i == 0 ; s[i] != '\0' ; i++)
	{
		if ( i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (y = 0 ; y < 13 ; y++)
		{
			if (s[i] == sep[y])
			{
				if ( s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
