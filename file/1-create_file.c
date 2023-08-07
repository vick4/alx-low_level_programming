#include "main.h"

/**
 * create_file - this function will creates a file.
 * @filename: A pointer to file create.
 * @text_content: write to the file.
 *
 * Return: If fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fee;
	int wee;
	int lee = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lee = 0; text_content[lee];)
			lee++;
	}

	fee = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wee = write(fee, text_content, lee);

	if (fee == -1 || wee == -1)
		return (-1);

	close(fee);

	return (1);
}
