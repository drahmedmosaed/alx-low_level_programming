#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n:the last_digit an integer
 * Return: returns output of last_digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit * -1;
_putchar(last_digit + '0');
return (last_digit);
}
