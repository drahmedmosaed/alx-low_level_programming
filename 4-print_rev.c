#include "main.h"
#include <stdio.h>
/**
 * print_rev - hello
 * @s: string
 * Return: backword
 */
void print_rev(char *s)
{
	int i,o,len;

	len = 0

	for (i = 0 ; i != '\0'; i++)
	{
		len++
	}
	for ( o = len -1 ; o >= 0 ; o--)
	{
		_putchar(s[o]);
	}
	_putchar('\n');
}
