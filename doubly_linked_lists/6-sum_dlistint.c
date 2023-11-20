#include "lists.h"
/**
 * sum_dlistint - the sum of all the data in a dlistint_t list
 * @head: head of the linked list
 *
 * Return: resulting sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (currrent != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
