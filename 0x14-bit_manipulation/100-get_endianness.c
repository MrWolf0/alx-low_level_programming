/*
 *============================================================================
 * Name        : bits_manipulation.c
 * Author      : MrWolf0
 * Version     : 1.0
 * Copyright   : GNU
 * Description : 0-binary_to_uint.c
 ============================================================================
 */
#include "main.h"
#include <stdio.h>
/**
 * get_endianness - check the code
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
/* In computer science endianness is a way to repesent bytes */
/* in the memory in a certain order, big-endian and little-endian */
/* are the two main ways to represent endianness.*/
/*BE stores the big-end first. When reading multiple*/
 /*bytes the first byte (or the lowest memory address) is the biggest*/
 /* so it makes the most sense to people who read left to right.*/
 /*LE stores the little-end first. When reading multiple bytes the first byte*/
 /* (or the lowest memory address) is the littlest */
 /*-  so it makes most sense to people who read right to left.*/
unsigned int x = 1;
/*Use a pointer p  to interpret the value of x as a byte array*/
unsigned char *p = (unsigned char *)&x;
 /* If the first byte (lowest address) is the least*/
 /* significant byte, it's little endian*/
 /* If the first byte is the most significant byte, it's big endian */
 /*? mean  if *p == 1 return 1 */
 /*: mean else if *p !=1 retuen 0*/
return ((*p == 1) ? 1 : 0);
}
