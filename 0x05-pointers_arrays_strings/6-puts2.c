#include "main.h"
/**
 * puts2 - bt2ool
 * @str: mashy
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	for (len = 0 ; str[len] != '\0' ; len++)
		;
	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
