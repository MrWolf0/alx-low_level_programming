#include <stdio.h>
/**
 * main - prints the program name, followed by a new line.
 * @argc:  number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
