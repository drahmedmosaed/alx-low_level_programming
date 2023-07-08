#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: aho
 * @accept: aho2
 * Return: Returns the number of bytes in the initial seg
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, f;

	n = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		f = 0;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (n);
		}
	}
	return (0);
}
