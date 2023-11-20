#include "lists.h"
/**
 * free_dlistint - fress a dlistint_t list
 * @head: head of the linked list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
