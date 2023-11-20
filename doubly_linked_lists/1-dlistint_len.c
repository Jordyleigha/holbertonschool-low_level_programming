#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: singly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
