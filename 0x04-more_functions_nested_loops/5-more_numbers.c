#include "holberton.h"
/**
 * more_numbers - prints numbers 10 times.
 * Return: 0 - doesn't return anything.
 */
void more_numbers(void)
{
int i;
int c = '0';
for (i = 0; i < 10; i++)
{
if (c != 15)
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
