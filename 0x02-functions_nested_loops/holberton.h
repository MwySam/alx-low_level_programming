#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch);
{
return (write(1, &c, 1));	
}

void print_alphabet(void);
{
char ch;	
for (ch ='a'; ch <= 'z'; ch++)
{
_putchar ("ch \n");
}
}        