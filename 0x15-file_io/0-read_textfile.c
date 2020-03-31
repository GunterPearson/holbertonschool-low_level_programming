#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, fd;
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
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(1, buff, letters);
	if (w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
