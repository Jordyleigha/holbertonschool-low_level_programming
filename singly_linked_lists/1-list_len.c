#include "lists.h"
/*
 * list_len - prints the number of elements of the list_t
 * @h: singly linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while(h != NULL)
	{
		elem++
			h = ->next;
	}
	return (elem);
}
