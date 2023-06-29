#include "main.h"
/**
 * *string_toupper - to upper case
 * @str: string to upper
 * Return: the string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
