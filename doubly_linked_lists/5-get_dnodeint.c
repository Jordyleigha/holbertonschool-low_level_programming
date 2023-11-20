#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at a certain index in a linked list
 * @head: head of the linked list
 * @index: index of the node to return
 *
 * Return: the nth node we're looking for or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
