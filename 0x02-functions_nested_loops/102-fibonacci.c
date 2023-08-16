#include <stdio.h>
/**
 *main - start point of the program
 *
 *Return: always must be 0 in case you are using int if you using void
 *
 *no need to return keyword
 */
int main(void)
{
	int count;
	unsigned long per_num = 0, next_num = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = per_num + next_num;
		printf("%lu", sum);

		per_num = next_num;
		next_num = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
