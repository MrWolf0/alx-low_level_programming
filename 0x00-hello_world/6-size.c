#include<stdio.h>
/**
 * main - start point of the program
 *
 * Return: always must be 0 in case you are using int if you using void
 *
 *  no need to return keyword
 *
 *  a simple progrm to calculate size of some variables
 *
 *  in c if your program attemps to access a memory location
 *
 * that does not hane the permission to access
 *
 *  an error segmentation fault will appear to you
 *
 * although no error in code writing
 */
int main(void)
{
int intager_num;
long int long_int_num;
long long int double_long_int_num;
char character;
float float_num;
printf("Size of a char: %d byte(s)\n", sizeof(character));
printf("Size of an int: %d byte(s)\n", sizeof(intager_num));
printf("Size of a long: %d byte(s)\n", sizeof(long_int_num));
printf("Size of a long long int: %d byte(s)\n", sizeof(double_long_int_num));
printf("Size of a float: %d byte(s)\n", sizeof(float_num));
return (0);
}
