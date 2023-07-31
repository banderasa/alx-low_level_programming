#include "lists.h"

/**
 * listint_len - It returns the number of elements in a linked lists
 * @h: linked list of type listint_t to tranverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}

	return (digit);
}

