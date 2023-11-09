#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
