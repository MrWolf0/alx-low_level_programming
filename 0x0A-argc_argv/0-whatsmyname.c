#include <stdio.h>
/**
 * main - prints the program name, followed by a new line.
 * @argc:  number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
/*using __attribute__((__unused__) is to tell the compiler*/
/*ignore that argument i will not use it in my code*/
	printf("%s\n", argv[0]);

	return (0);
}
