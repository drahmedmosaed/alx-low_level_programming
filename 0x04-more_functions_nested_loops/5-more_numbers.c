#include "main.h"
/**
 * more_numbers - asdfasdf
 * Return: asdf
 */
void more_numbers(void)
{
	int r;

	for (r = 0 ; r < 10 ; r++)
	{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
		if ( i > 9 )
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
	}
}
