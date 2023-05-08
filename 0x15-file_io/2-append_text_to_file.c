#include "main.h"

/**
 * append_text_to_file - text at the end.
 * @filename: file name.
 * @text_content: add string.
 *
 * Return: If fails or filename is NULL - -1.
 *         If the file does not exist - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oee;
	int wee;
	int lee = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lee = 0; text_content[lee];)
			lee++;
	}

	oee = open(filename, O_WRONLY | O_APPEND);
	wee = write(oee, text_content, lee);

	if (oee == -1 || wee == -1)
		return (-1);

	close(oee);

	return (1);
}
