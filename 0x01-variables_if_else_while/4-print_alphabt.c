#include <stdio.h>
/**
 * main - hello world
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
		{
			x++;
		}
		else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
