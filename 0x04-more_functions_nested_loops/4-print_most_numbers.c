#include "main.h"
/**
 * print_most_numbers - donya
 * Return: bed
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i + '0');
		       i++;
		}
	}
	_putchar('\n');
}
