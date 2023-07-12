#include "main.h"

/**
* create_array - creates an array of chars
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ahmed;
	unsigned int index;

	if (size == 0)
		return (NULL);
	ahmed = malloc(sizeof(char) * size);

	if (ahmed == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ahmed[index] = c;

	return (ahmed);
}
