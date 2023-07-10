#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_descriptor;
	int num_letters;
	int wr_results;

	if (!filename)
		return (-1);

	f_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (f_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		wr_results = write(f_descriptor, text_content, num_letters);

		if (wr_results == -1)
			return (-1);
	}

	close(f_descriptor);

	return (1);
}
