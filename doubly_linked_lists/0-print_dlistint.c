#include "lists.h"
/**
 * print_dlistint - prints all the elements of the list dlistint_t
 * @h: singly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
