#include <stdio.h>

/**
 *main - start point of the program
 *
 *Return: always must be 0 in case you are using int if you using void
 *
 *no need to return keyword
 *
 *here just using strlen from string.h to calculate buffer size
 *
 *then write the string with the same size that assign to the buffer
 *
 *and using 1 as  file descriptor of  standard output
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 *write your line of code here...
	 *Remember:
	 *- you are not allowed to use a
	 *- you are not allowed to modify p
	 *- only one statement
	 *- you are not allowed to code anything else than this line of code
	 */
	p[5] =  98;
	/*...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
