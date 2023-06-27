#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - print second half
 * @str: the string
 * Return: aho mashya
 */
void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (len - 1) / 2 ; i < len ; i++)
		{
			_putchar(str[i + 1]);
		}
		_putchar('\n');
	}
}
