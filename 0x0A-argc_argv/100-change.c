#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name, followed by a new line.
 * @argc:  number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}

	printf("%d\n", coin);

	return (0);
}
