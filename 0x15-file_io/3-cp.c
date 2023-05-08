#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fee);

/**
 * create_buffer - shear 1024 bytes for buffer.
 * @file: file buffer is chars for.
 *
 * Return: return the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close file.
 * @fee: The file close.
 */
void close_file(int fee)
{
	int cee;

	cee = close(fee);

	if (cee == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fee);
		exit(100);
	}
}

/**
 * main - Copy the file.
 * @argc: The number of arguments.
 * @argv: the number of argument.
 *
 * Return: return 0 success.
 *
 * Description: If argument count to be incorrect - exit code 97.
 * If file_from does cannot be read then - exit code 98.
 * If file_to cannot be created then - exit code 99.
 * If file_to or file_from cannot close - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fee;
	int tee;
	int ree;
	int wee;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fee = open(argv[1], O_RDONLY);
	ree = read(fee, buffer, 1024);
	tee = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fee == -1 || ree == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wee = write(tee, buffer, ree);
		if (tee == -1 || wee == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		ree = read(fee, buffer, 1024);
		tee = open(argv[2], O_WRONLY | O_APPEND);

	} while (ree > 0);

	free(buffer);
	close_file(fee);
	close_file(tee);

	return (0);
}
