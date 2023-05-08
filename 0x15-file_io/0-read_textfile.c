#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int file;
	ssize_t rf, wf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rf = read(file, buf, letters);
	wf = write(STDOUT_FILENO, buf, rf);
	if (wf == -1)
		return (0);

	close(file);
	return (wf);
}
