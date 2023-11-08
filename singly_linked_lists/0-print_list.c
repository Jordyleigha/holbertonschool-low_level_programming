#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of the list list_t
 * @h: singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h);

size_t element;
element = 0;
while (h != NULL)
{
	if (h -> str == NULL)
		printf("[%d] %s\n", 0, "(nil");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = -> next
		element++;
	return (element);
}
