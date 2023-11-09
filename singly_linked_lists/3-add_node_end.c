#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end;
	size_t i;

	add_end = malloc(sizeof(list_t));
	add_end->len = i;
	add_end->next = NULL;
