#include "main.h"
/**
 * _strlen - donia
 * @s: mashya
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
