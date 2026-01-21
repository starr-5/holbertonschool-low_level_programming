#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file
 * @text_content: text to write (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, written = 0;
    int i = 0;

    if (!filename)
        return (-1);

    /* open file for writing, create if missing, truncate if exists, permissions rw------- */
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    /* if text_content is not NULL, write it */
    if (text_content)
    {
        while (text_content[i]) /* count length of string */
            i++;

        written = write(fd, text_content, i);
        if (written != i) /* check if write was successful */
        {
            close(fd);
            return (-1);
        }
    }

    close(fd); /* close the file */
    return (1); /* success */
}
