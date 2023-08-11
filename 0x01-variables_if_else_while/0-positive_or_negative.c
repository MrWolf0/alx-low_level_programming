#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - start point of the program
 *
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 */
int main(void)
{
int n;
 /* to generate a seed value that  rand() based on */
srand(time(0));
/* rand() random number generator  fun in c */
/* RAND_MAX an integer constant representing */
/* the largest value the rand function can return */
/* In the GNU C Library, it is 2147483647 */
n = rand() - RAND_MAX / 2;
/* if condition check n value positive , negative or zero */
if (n > 0)
{
printf("%d  is psitive\n ", n);
}
else if (n == 0)
{
printf("%d is zero\n ", n);

}
else
{
printf("%d is negative\n ", n);
}

return (0);
}

