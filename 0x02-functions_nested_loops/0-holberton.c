#include"holberton.h"
/**
 * main - Entry point
 *
 * Description: prints Holberton, will be using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * we declare our str char array of size 10
	 * and an int ch which is 0
	 */
	char str[9] = "Holberton";
	int i;
	/**
	 * print each character from our str array
	 * which contains 9 characters
	 */
(for i = 0; i < 9; i++)
{
_putchar(str[i]);
}
/*place a new line after looping through our charcters*/
_putchar('\n');
return (0);
}
