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
	/*using ssize_t is to assign the sign of return value */
	/*which may be -1 that why we use ssize_t nested of size_t */
	/*which only allow to use positive numbers and many syscall */
	/*return -1 if it fail */

	ssize_t open_f, read_f, write_t;

	/*a pointer that act as a buffer */

	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}

	/*allocate memory with the number of bytes feed to the function */
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}

	/*here we create a connection between our program and the desired file 
	note that file descriptor depends on the return value 
	if -1 it failed to open connection almost returned value is 3 
	assuming filename exists in same dir if not it will use 
	the absolute path which represent as */

	open_f = open(filename, O_RDONLY);

	/*here we also check the return value from syscall that read function use */
	/*so after opening file in desired mode it return an integer value */
	/*Knowing as file descriptor which tell the system which file  */
	/*it will read assume we have 3 opening files on the system */
	/*we don't need read three but we want the only one opening */
	/*by the open function which the system give it a number */
	/*we feed to read function to tell the system use that file */
	/*in our program */
	/*here read will read the file depends on that value */
	/*if -1 return the syscall failed to read the file */

	read_f = read(open_f, ptr, letters);

	/*that is the final stage which assume that no error happen in previous steps */
	/*here the value 1 is to send output to stdout and what will write */
	/*the number of bytes represent by output of read function */
	/*ptr pointer is tell write function to write from the memory location */
	/*ptr point to may be read function read some or all file content*/
	/*depends on the letters passed to the function*/
	/*if return -1 the syscall using by write doesn't start correctly*/

	write_t = write(1, ptr, read_f);

	/*checking for return values of three functions actually we check*/
	/*he return value of syscall but virtually we use this functions*/
	/*also output of write must not equal to the read output because if pass more than*/
	/*limited bytes in file an error will occur and if it happen free the ptr*/

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
