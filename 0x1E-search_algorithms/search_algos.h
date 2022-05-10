#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>

/**
 * struct listint_s - Singly linked list.
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 \*
 * Description: Singly linked list node structure.
 *        */

typedef struct listint_s
{
		/* Integer stored at the node. */
		int n;
			/* Index of the node in the list. */
			size_t index;
				/* Pointer to the next node. */
				struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
