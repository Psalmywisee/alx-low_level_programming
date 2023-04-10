#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This is a function to read a text file
 * and prints it to the POSIX
 * @filename: text file to be operaated on
 * @letters: number of letters to be read and printed
 * Return: Actual number of letter to be read and printed
 * 0 if file cannot be opened or written to
 * 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t fd;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (k);
}
