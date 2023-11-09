#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end, *current_node;
	size_t i;

	add_end = malloc(sizeof(list_t));
	if (add_end == NULL)
		return (NULL);

	add_end->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	add_end->len = i;
	add_end->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = add_end;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = add_end;
	}
	
	return (*head);
}
