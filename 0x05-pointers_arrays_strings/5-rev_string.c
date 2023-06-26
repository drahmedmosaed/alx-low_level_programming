#include "main.h"
/**
 * rev_string - hello
 * @s: string
 * Return: backword
 */
void rev_string(char *s)
{
	int len;

	len = 0;

while (s[len] != '\0')
{
	len++;
}
int r, x;

x = 0;

for (r = len - 1; r >= 0 ; r--)
{
	char temp;
	temp = s[x];
	s[r] = s[x];
	temp = s[r];
	x++;
}
}
