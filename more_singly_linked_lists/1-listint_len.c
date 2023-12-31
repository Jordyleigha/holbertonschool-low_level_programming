#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem;

	elem = 0;
	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
