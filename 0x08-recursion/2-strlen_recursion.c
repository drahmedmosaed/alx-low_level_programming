#include "main.h"
/**
 * _strlen_recursion - return the length of strint
 * @s: the string we want to get the length
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
