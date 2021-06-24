#include "holberton.h"
/**
 * print_most_numbers - prints numerical digits except 2 and 4.
 * Return: 0 - doesn't return anything.
 */
void print_most_numbers(void)
{
int i ;
if (i != '2' && i != '4')
{
while (i <= '9')
{
_putchar(i);
i++;
}
}
_putchar('\n');
}
