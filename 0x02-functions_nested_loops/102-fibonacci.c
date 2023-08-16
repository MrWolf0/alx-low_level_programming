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
int counter = 0;
next_num = 1;
while (counter < 49)
{
sum = per_num +  next_num;
printf("%ld, ", sum);
per_num = next_num;
next_num = sum;
counter++;
}
sum = per_num + next_num;
printf("%ld\n", sum);
return (0);
}
