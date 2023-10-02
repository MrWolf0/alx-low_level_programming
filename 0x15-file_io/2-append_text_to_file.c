/*
 * ============================================================================
 *Project        : 0x15. C - File I/O
 *Author         : MrWolf0
 *Version        : 1.0
 *Copyright      : GNU
 *Description    : 2-append_text_to_file.c
 *============================================================================
 */
#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: A pointer to the name of the file.
 *@text_content: The string to add to the end of the file.
 *
 *Return: If the function fails or filename is NULL - -1.
 *        If the file does not exist the user lacks write permissions - -1.
 *        Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;

	ssize_t open_f, write_t;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	open_f = open(filename, O_WRONLY | O_APPEND);
	write_t = write(open_f, text_content, len);

	if (open_f == -1 || write_t == -1)
	{
		return (-1);
	}

	close(open_f);

	return (1);
}
