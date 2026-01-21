#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written = 0;
	int i = 0;

	if (!filename)
		return (-1);

	/* open file for writing only, do not create if missing */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* write text_content if it is not NULL */
	if (text_content)
	{
		while (text_content[i])
			i++;

		written = write(fd, text_content, i);
		if (written != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
