#include "main.h"
/**
 * print_rev - hello
 * @s: string
 * Return: backword
 */
void print_rev(char *s)
{
	int i, o, len;
i = 0;

while (s[i] != '\0')
{
	i++;
}
len = i;
for (o = len - 1 ; o >= 0 ; o--)
{
	_putchar(s[o]);
}
	_putchar('\n');
}
