#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * print_array - print second half
 * @a: the string
 * @n: number
 * Return: aho mashya
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
