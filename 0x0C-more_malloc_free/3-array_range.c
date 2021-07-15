#include <stdlib.h>
#include "holberton.h"
/**
* *array_range - create an array of integers
* @min: size of the array
* @max: char to initialize
* Return: pointer to the array initialized or NULL
*/
int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
