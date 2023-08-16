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
	int counter, sum;
/*itrate all number from 0 to 1024*/
	for (counter = 0; counter < 1024; counter++)
	{
/* if no reminder from divide the number by 3 or by 5 like 10, 12, 15 and 18*/
		if (counter % 3 == 0 || counter % 5 == 0)
		{
/* append result to the sum variable*/
			sum = sum + counter;
		}
	}

	printf("%d\n", sum);
	return (0);
}
