#include <stdio.h>
/**
 * main - start point of the program
 *
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 */
int main(void)
{
/*long type required because output will be > 65535*/
int long sum, per_num, next_num;
int counter;
next_num = 1;
for (counter = 1; counter <= 49; counter++)
{
printf("%ld, ", next_num);
/*assign sum of per_num and next_num */
sum = per_num + next_num;
per_num = next_num;
next_num = sum;
}
sum = per_num + next_num;
printf("%ld\n", sum);
return (0);
}

