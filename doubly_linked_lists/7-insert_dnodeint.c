#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * in a linked list at a given position
 * @head: head of the linked list
 * @idx: index where the new node will be added
 * @n: data that will be inserted in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *add;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp ->next == NULL)
		return (add_dnodeint_end(h, n));

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = temp;
	add->next = temp->next;
	temp->next->prev = add;
	temp->next = add;

	return (add);
}
