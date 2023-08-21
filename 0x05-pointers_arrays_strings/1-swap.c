#include "main.h"
/**
 * swap_int -swap two values using a pointer
 *@a:  is a pointer of integer number
 *@b:  is a pointer of integer number
 *Return: Always 0.
 */
 void swap_int(int *a, int *b)
 {
 /*we need another variable to hold one of two values*/
 int temp_value = 0;
 /* store value of address a in temp_value*/
 temp_value = *a;
 /*change the value of address a to the value of address b*/
 *a = *b;
  /*change the value of address b to the value of temp_value*/
 *b = temp_value;
 }
