#include "holberton.h"
/**
 * create_file - start of function
 * @filename: name
 * @text_content: contents
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, s;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	s = _strlen(text_content);
	w = write(fd, text_content, s);
	if (w == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - start of function
 * @s: start of string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
