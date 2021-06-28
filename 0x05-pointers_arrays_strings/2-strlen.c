#include "holberton.h"
/**
 * _strlen -  returns the length of a string
 * @s: pointer
 * Return: length of string
 */
int _strlen(char *s)
{
int t = 0;
while (s[t])
t++;
return (t);
}
