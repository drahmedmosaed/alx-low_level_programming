#include "main.h"
/**
 * rev_string - hello
 * @s: string
 * Return: backword
 */
void rev_string(char *s)
{
	int i, o, len, r;
	char *temp = s;
i = 0;

while (s[i] != '\0')
{
	i++;
}

len = i;
r = 0;
char f[len];

for (o = len - 1 ; o >= 0 ; o--)
{
	temp[o] = f[r];
	r++;
}
s = f;
}
