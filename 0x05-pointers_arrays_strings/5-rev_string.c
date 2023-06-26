#include "main.h"
/**
 * rev_string - hello
 * @s: string
 * Return: backword
 */
void rev_string(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    int i;
    char temp;
    for (i = 0; i < len/2; i++)
    {
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}
