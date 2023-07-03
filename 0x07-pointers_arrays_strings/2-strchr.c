#include "main.h"
/**
 * *_strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: string
 * @c: charecter
 * Return: occurance
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' ; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
