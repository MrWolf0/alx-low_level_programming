/*
 * ============================================================================
 *Project        : 0x15. C - File I/O
 *Author         : MrWolf0
 *Version        : 1.0
 *Copyright      : GNU
 *Description    : 0-read_textfile.c
 *============================================================================
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *read_textfile - Reads a text file and prints it to POSIX stdout.
 *@filename: A pointer to the name of the file.
 *@letters: The number of letters the
 *          function should read and print.
 *
 *Return: If the function fails or filename is NULL - 0.
 *        O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t open_f, read_f, write_t;
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}

	open_f = open(filename, O_RDONLY);

	read_f = read(open_f, ptr, letters);

	write_t = write(1, ptr, read_f);

	if (open_f == -1 || read_f == -1 || write_t == -1 || write_t != read_f)
	{
		free(ptr);
		return (0);
	}

	/*close the connection after free the ptr */
	free(ptr);
	close(open_f);

	return (write_t);
}
