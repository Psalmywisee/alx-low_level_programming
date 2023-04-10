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
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(a);
	return (b);
}
