#include "main.h"
/**
 * *_strcat - btconcat
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lend, lens;

	lend = 0;
	lens = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}
	while (src[lens] != '\0')
	{
		dest[lend] = src[lens];
		lend++;
		lens++;
	}
	dest[lend] = '\0';

	return (dest);
}
