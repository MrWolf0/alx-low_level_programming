#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - print time of day in formate h:min
 *@num: is the number pass to the function  as argument
 * Return: Always 0.
 */
void print_to_98(int num)
{
if (num <= 0)
{
while (num <= 98)
{
if (num == 98)
{
printf("%d", num);
break;
}
printf("%d, ", num);
num++;
}
}
else if (num >= 98)
{
while (num >= 98)
{
if (num == 98)
{
printf("%d", num);
break;
}
printf("%d, ", num);
num--;
}
}
else
{
while (num <= 98)
{
if (num == 98)
{
printf("%d", num);
break;
}
printf("%d, ", num);
num++;
}
}
}

