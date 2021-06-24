#include "holberton.h"
/**
 * _isdigit(int c)- function that checks for numeric digit
 *@c: ascii value of char
 * Return: 1 when lowercase , 0 when not.
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
