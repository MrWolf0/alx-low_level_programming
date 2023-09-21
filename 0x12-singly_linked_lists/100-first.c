/*
 *============================================================================
 *Name        : Linked_list.c
 *Author      : Mr Wolf
 *Version     :
 *Copyright   : Phoenix
 *Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
