/*
 * ============================================================================
 *Project        : 0x15. C - File I/O
 *Author         : MrWolf0
 *Version        : 1.0
 *Copyright      : GNU
 *Description    : 1-create_file.c
 *============================================================================
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_file - Creates a file.
 *@filename: A pointer to the name of the file to create.
 *@text_content: A pointer to a string to write to the file.
 *
 *Return: If the function fails - -1.
 *        Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	/*variable to calculate the length of i pass data to be written in the file*/
	int len = 0;

	ssize_t open_f, write_t;
	/*Assign permission*/
	unsigned int permission = 0600;
	/*checking that filename is feed to the program */
	if (filename == NULL)
	{
		return (-1);
	}
	/*calculate length of the string to be written */
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	/*first create the file if it doesn't exist then open it in*/
	/* read and write mode */
	/*if the file exist and If the file already exists and is a regular file */
	/*and the access mode allows writing and reading  */
	/*it will be truncated to length 0 */

	open_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, permission);

	/*write content with the number of bytes represent by len */
	write_t = write(open_f, text_content, len);
	if (open_f == -1 || write_t == -1)
	{
		return (-1);
	}
	close(open_f);
	return (1);
}
