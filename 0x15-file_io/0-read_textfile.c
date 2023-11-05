#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters it could read and print.
 *
 * Return: returns the actual number of letters it could read and print
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(O);

	return (W);
}
