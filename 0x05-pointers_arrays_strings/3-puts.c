#include "main.h"
/**
 * _puts - aho mashy
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int len;
	int i;

	len = _strlen(*str);
	for (i = 0; i <= len; i++)
		_putchar(*str[i]);
}
