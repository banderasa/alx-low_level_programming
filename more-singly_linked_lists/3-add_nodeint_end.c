#include "lists.h"

/**
 * add_nodeint_end - This will add a node at the end of a linked list
 * @head: serves as a pointer to the first element in the list
 * @n: The data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *degree = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (degree->next)
		degree = degree->next;

	degree->next = fresh;

	return (fresh);
}

