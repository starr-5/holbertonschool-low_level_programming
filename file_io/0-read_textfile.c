#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);
	if (w != r)
		return (0);

	free(buf);
	close(fd);
	return (w);
}
