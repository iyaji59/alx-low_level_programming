#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd  = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	close(fd);

	free(buffer);

	return (wrt);

}
