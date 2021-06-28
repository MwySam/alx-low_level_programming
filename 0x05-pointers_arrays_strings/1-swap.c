#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer
 * @b:pointer
 * @t:place holder for a
 * Return: void
 */
void swap_int(int *a, int *b)
{
int t
t = *a;
*a = *b;	
*b = t;
}
