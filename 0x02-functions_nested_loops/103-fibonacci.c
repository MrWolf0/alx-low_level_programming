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
	unsigned long per_num = 0, next_num = 1, sum = 0;
	int final_res = 0;

	for (;;)
	{
		sum = per_num + next_num;
		if (sum > 4000000)
		{
			break;
		}

		if (sum % 2 == 0)
		{
			final_res += sum;
		}

		per_num = next_num;
		next_num = sum;
	}

	printf("%d\n", final_res);
	return (0);
}
