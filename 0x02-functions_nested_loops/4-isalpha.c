#include "main.h"
/**
 * _isalpha -  bdn el tenneen
 * @c: bdan el bdan
 * Return: 0-1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
