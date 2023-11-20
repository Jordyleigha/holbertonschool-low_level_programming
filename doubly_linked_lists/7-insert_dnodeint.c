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
	unsigned int i;
	dlistint_t *add;
	dlistint_t *temp = *h;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *h;
		*h = add;
		return (add);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			add->next = temp->next;
			temp->next = add;
			return (add);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
