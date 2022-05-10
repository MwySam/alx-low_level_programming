#include "search_algos.h"
/**
 * linear_search - Searches a value in an array using a linear search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value);
{
	size_t i;
	for (i = 0; i < size; i++)
	       if (*array == value)
	       {
		       printf("Found %d at index %d/n", int (i), *array);
		       return i;
	       }
	       else
	       {
		       printf("Found %d at index %d/n", int (i), *array);
		       return -i;
	       }
}
