#include "main.h"
/**
 * factorial - give the factorial of number
 * @n: pointer of memory to fil
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n-1));
}
