#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- study the file to STDOUT.
 * @filename: read file
 * @letters: all the number to read
 * Return: w- will be returned or
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bee;
	ssize_t fee;
	ssize_t wee;
	ssize_t tee;

	fee = open(filename, O_RDONLY);
	if (fee == -1)
		return (0);
	bee = malloc(sizeof(char) * letters);
	tee = read(fee, bee, letters);
	wee = write(STDOUT_FILENO, bee, tee);

	free(bee);
	close(fee);
	return (wee);
}
