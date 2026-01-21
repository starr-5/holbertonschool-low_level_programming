#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copies a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success, exits on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r;
	char buf[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, r) != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (r < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (close(fd_from) < 0 || close(fd_to) < 0)
		dprintf(2, "Error: Can't close fd\n"), exit(100);

	return (0);
}
