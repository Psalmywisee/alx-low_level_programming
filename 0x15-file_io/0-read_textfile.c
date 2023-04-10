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
	int fd, t;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
	return (0);
		if (!filename)
			return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	return (0);
	t = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (t);
}
