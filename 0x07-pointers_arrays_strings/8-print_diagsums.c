#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sim of two diagonal
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[(size * i) + i];
		sum1 = sum1 + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
