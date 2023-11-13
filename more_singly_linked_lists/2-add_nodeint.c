#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @head: head of the linked list
 * @n: data in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
