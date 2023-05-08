#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_byt;
	ssize_t write_byt;

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_byt = read(fd, buffer, letters);
	write_byt = write(STDOUT_FILENO, buffer, read_byt);
	close(fd);
	free(buffer);
	return (write_byt);


}
