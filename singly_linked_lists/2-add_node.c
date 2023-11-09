#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str);
{

	list_t *add_node;
	size_t i;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strup(str);

	for (i = 0; str[i]; i++);

	add_node->len = i;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
