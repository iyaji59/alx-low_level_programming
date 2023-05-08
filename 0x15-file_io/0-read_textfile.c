#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	char *buffer = (char *) malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read < 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytes_written);
}
