#include "main.h"
#include<stdio.h>
/**
 * print_array -print array to stout device.
 *@a:  is a pointer point to the address of current index in a giving array
 *@n: number of elements of the array to be printed
 *Return: Always 0.
 */
void print_array(int *a, int n)
{
int counter = 0;
while (counter <= n)
{
printf("%d", a[counter]);
counter++;
if (counter == n - 1)
{
break;
}
printf(", ");
}
printf("\n");
}
