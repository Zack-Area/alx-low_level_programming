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
	int f_descriptor;
	ssize_t b_read, b_written;
	char *buffer;

	if (!filename)
		return (0);

	f_descriptor = open(filename, O_RDONLY);

	if (f_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	b_read = read(f_descriptor, buffer, letters);
	b_written = write(STDOUT_FILENO, buffer, b_read);

	close(f_descriptor);

	free(buffer);

	return (b_written);
}
