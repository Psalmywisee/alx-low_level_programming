nclude <stdio.h>
#include "main.h"

/**append_text_to_file - Appending a text at end of file
 * @filename: The name for the file to be appended to
 * @test_content: Represents the string to be added at the end of the file
 * Return: for success it is 1 and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	if(!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - String length to be returned
 * @s: Counting fot string
 * Return: the actual length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}
