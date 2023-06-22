#include "main.h"
/**
 * print_diagonal - hello
 * n@: number of numbers
 * Return: void
 */
void print_diagonal(int n)
{
	int s;

	for (s = 0 ; s <= n ; s++)
	{
		int r;

		for (r = 0 ; r <= s ; r++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
