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
	int fd, fd_t, r = 1, w = 1;
	char buff[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (buff == NULL)
		return (1);
	r = read(fd, buff, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (r > 0)
		w = write(fd_t, buff, r);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	r = close(fd);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
	w = close(fd_t);
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
	return (0);
}
