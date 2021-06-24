#include "holberton.h"
/**
 * print_most_numbers - prints numerical digits except 2 and 4.
 * Return: 0 - doesn't return anything.
 */
void print_most_numbers(void)
{
char c = '0';
while (c <= '9' && c != 50 && c != 52)
{
_putchar(c);
c++;
}
_putchar('\n');
}
