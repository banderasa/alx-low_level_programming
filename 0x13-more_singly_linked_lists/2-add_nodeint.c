#include "lists.h"

/**
 * add_nodeint - This will add a new node at the beginningof a linked list
 * @head: this acts as a pointer to the first node on the list
 * @n: data to be inserted in that new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}

