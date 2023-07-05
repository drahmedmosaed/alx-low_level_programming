#include "main.h"
/**
 * _strlen_recursion - return the length of strint
 * @s: the string we want to get the length
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		return (len);
	}
	else
	{
		len++;
 		_strlen_recursion(s + 1);
	}
}
