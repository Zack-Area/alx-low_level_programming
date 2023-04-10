#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	int num_letters;
	int wr_results;

	if (!filename)
		return (-1);

	f_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	wr_results = write(f_descriptor, text_content, num_letters);

	if (wr_results == -1)
		return (-1);

	close(f_descriptor);

	return (1);
}
