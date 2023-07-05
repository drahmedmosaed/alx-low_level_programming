#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n: the number to do on
 * Return: the squarte root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - _sqrt
 * @n: integer parameter
 * @i: another int
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if ((i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
