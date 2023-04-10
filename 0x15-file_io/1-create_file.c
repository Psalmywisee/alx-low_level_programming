#include "main.h"

/**
 * create_file - A function that creates a file considering
 * returning 1, -1 and NULL
 * @filename: A pointer to the name of the file to be created
 * @text_content: A pointer to a string, which the file would be written
 * Return: 1 if successful and -1 for failure
 * If filename is empty create a empty file
 */
int create_file(const char *filename, char *text_content)
{
	int w, fd, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
	return (-1);
	close(fd);
	return (1);
}
