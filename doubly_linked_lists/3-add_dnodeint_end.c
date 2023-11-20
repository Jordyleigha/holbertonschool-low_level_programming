#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 * @head: head of a linked list
 * @n: integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlsitint_t *add_end, *temp;

	add_end = malloc(sizeof(dlistint_t));
	if (add_new == NULL)
		return (NULL);

	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
	{
		add_end->prev = NULL;
		*head = add_end;
		return (add_end);
	}

	temp = *head;
	while (temp-> != NULL)
		temp = temp->next;
	temp->next = add_end;
	add_end->prev = temp;

	return (add_end);
}
