#include "main.h"
#include "2-strlen.c"
/**
 * *_strcpy - bt3weg
 * @dest: pointer
 * @src: pointer
 * Return: beed
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0 ; i <= len ; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
