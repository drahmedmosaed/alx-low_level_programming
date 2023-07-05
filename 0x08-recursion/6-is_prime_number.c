#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - if prime return 1 or 0
 * @n: the number under test
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n-1));
}
/**
 * prime - calculcat priminity
 * @n: number 
 * @i: iterat
 * Return q or 0
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
