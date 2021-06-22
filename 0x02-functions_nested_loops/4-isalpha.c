#include "holberton.h"

/**
 * int _isalpha - checks for alphabetic character
 * @c: ascii value of char
 * Return: 1 when lowercase , 0 when not.
 */
int _isalpha(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else if (c > 97 && c < 123)	
{
return (1);
}
else
{
return (0);
}
}
