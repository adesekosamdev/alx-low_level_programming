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
	int filetoopen;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	filetoopen = open(filename, O_RDONLY);

	if (filetoopen == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(filetoopen, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(filetoopen);

	free(buffer);

	return (nwrite);
}
