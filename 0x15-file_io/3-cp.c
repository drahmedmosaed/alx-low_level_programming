#include "main.h"

/**
 * main - copy from to
 * @argc: arguments
 * @argv: array of arguments
 * Return: Always 0 ( means success)
 */
int main(int argc, char *argv[])
{
	int r_fd, w_fd, r, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r_fd = open(argv[1], O_RDONLY);
	if (r_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(r_fd, buf, BUFSIZ)) > 0)
	{
		if (w_fd < 0 || write(w_fd, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(r_fd);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(r_fd);
	b = close(w_fd);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r_fd);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w_fd);
		exit(100);
	}
	return (0);
}
