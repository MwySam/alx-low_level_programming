#include "holberton.h"
/**
 * more_numbers - prints numbers 10 times.
 * Return: 0 - doesn't return anything.
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int c = '0';
if (c != 15)
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
