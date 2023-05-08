#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);
	wrt = write(STDOUT_FILENO, buffer, rd);
	if (wrt == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buffer);
	return (wrt);
}
