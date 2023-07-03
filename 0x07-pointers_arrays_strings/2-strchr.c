#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: string
 * @c: charecter
 * Return: occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != '\0') && (s[i] != c) ; i)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return (NULL);
}
