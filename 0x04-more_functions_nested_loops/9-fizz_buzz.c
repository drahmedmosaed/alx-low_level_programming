#include "mahin.h"
#include <stdio.h>

/**
 * main - fiz biz
 * Return 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if i == 1
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
