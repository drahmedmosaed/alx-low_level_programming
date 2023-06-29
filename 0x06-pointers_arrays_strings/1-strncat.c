#include "main.h"
/**
 * *_strncat - 7aga tanya
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int lend, lens;

        lend = 0;
        lens = 0;

        while (dest[lend] != '\0')
        {
                lend++;
        }
        while (src[lens] != '\0' && lens < n)
        {
                dest[lend] = src[lens];
                lend++;
                lens++;
        }
        dest[lend] = '\0';

        return (dest);
}
