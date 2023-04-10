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
	int fd
	char *buffer;
	ssize_t t;
	ssize_t fd;
	ssize_t k;

	if (!buffer)
	return (0)
		if (!filename)
			return (0)

	fd = open(filename, O_RDONLY,0700 );
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char*) * letters);
	t = read(fd, buffer, letters);
	k = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (k);
}
