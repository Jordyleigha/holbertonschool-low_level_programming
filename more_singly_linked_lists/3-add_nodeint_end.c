#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: head of the linked list
 * @n: data in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *current_node;

	add = malloc(sizeof(listint_t));
	if (add = NULL)
		return (NULL);

	add->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = add;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = add;
	}
	return (*head);
}
