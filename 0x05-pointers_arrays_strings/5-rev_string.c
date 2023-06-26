#include "main.h"
/**
 * rev_string - hello
 * @s: string
 * Return: backword
 */
void rev_string(char *s)
{
    char temp;
    int i, len, r;

    len = 0;
    r = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    r = len - 1;

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[r];
        s[r--] = temp;
    }
}
