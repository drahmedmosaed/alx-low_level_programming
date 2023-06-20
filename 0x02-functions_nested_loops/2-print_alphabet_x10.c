#include "main.h"
/**
 * print_alphabet_x10 - hhhh
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char z;

		for (z = 'a' ; z <= 'z' ; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
