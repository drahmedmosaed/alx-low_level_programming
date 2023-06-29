#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string 1
 * @s2: string 2
 * Return: 7ezn
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		else if (*s2 == '\0')
		{
			return (0);
		}
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}
