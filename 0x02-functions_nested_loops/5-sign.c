#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number
 * @c: integer argument passed to the function
 * Return: 1 when true, 0 when false
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n = 0)
{
_putchar('0');
return (0);
}
else if (n < 0)	
{
_putchar('-');	
return (-1);
}
}
