#include "lists.h"

/**
 * sum_listint - This will calculate the sum of all the data int the listint_t list
 * @head: first node in the linked list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
