#include "holberton.h"
/**
 * read_textfile - start of function
 * @filename: char *
 * @letters: number to be printed
 *
 * Return: number printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
