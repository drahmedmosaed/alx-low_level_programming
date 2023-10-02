#include "main.h"

/**
 * _strlen - Calculate the length of a null-terminated string.
 *
 * @str: Pointer to the string to be measured.
 *
 * Return: The length of the string (number of characters) excluding the
 *         null-terminator.
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * append_text_to_file - Appends text content to an existing file or creates
 *                       a new file if it doesn't exist.
 *
 * @filename: The name of the file to append to or create
 * @text_content: The text content to append to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (len == -1)
		return (-1);
	return (1);
}
