#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list at a given position
 * @head: head of the linked list
 * @idx: index where the new node will be added
 * @n: data that will be inserted in the new node
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *temp = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
