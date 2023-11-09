#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end;
	size_t i;

	add_end = malloc(sizeof(list_t));
	if (add_end == NULL)
		return (NULL);

	add_end->str = strdup(str);

	add_end* last = **head;
	add_end->next = NULL;

	if (**head == NULL){
		**head = add_new;
		return;
	}
	while (last-> != NULL){
		last = last->next;
	}
	last->next = add_end;
}

	
