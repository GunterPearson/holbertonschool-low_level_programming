#include "holberton.h"
/**
 * main - main
 * @argc: arg count
 * @argv: arg contents
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd, fdt, r, w, c, ct;
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		free(buff);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	r = read(fd, buff, 1024);
	if (fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	w = write(fdt, buff, r);
	if (fdt == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	c = close(fd);
	ct = close(fdt);
	if (c == -1 || ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		free(buff);
		exit(100);
	}
	free(buff);
	return (0);
}
