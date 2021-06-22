#include "holberton.h"
/**
 * _islower(int c)- function that checks for lowercase character
 *@c: ascii value of char
 * Return: 1 when lowercase , 0 when not.
 */
int _islower(int c);
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}	
}
