#include "lists.h"

/**
 * pop_listint - this will delete the head node of a linked list
 * @head: This serves as a pointer to the first element in the linked list
 *
 * Return: The data inside the elements that was deleted or 0 iif the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
