#include "holberton.h"
/**
 * append_text_to_file - start of function
 * @filename: file to append
 * @text_content: text to add
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, sl;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	sl = _strlen(text_content);
	w = write(fd, text_content, sl);
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
