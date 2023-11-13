#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head of the linked list
 *
 * Return: data that was in the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
