#include "lists.h"

/**
 * print_list - prints all the elements of the list list_t
 * @h: singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h){

size_t elem;

elem = 0;
while (h != NULL)

	if (h -> str == NULL)
		printf("[%d] %s\n", 0, "(nil");
	else
		printf("[%d] %s\n", h->len, h->str);
h= h->next;
		elem++;
	return (elem); 
}
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
