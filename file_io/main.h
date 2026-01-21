#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
