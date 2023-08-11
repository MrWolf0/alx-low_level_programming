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
/* a netsed for loop program  need 2 couner */
int counter_1, counter_2;
/*for that task we don't need to print pair values such 22,33 and so on*/
/* the frist loop to print values from 0 to 8 */
/*as like the frist digit like 0x x will be changable for frist round*/
for (counter_1 = '0'; counter_1 < '9'; counter_1++)
{
/* the second loop to print the secod digit from 1 to 9 */
/* as like x1 x getting from frist loop that by increament counter_2 by 1*/
/* so here the frist value will not be 00 and start from 01*/
for (counter_2 = counter_1 + 1; counter_2 <= '9'; counter_2++)
{
/* prevent to repate 2 pair values such as 22,33  so always start with*/
/* a unique value in the chain until frist loop rich 8*/
if (counter_2 != counter_1)
{
putchar(counter_1);
putchar(counter_2);
if (counter_1 == '8' && counter_2 == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

