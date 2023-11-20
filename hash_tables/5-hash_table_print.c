#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table to print
 *
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *add;
	unsigned long int n;
	unsigned char print = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (print == 1)
				printf(", ");

			add = ht->array[n];
			while (add != NULL)
			{
				printf("'%s': '%s'", add->key, add->value);
				add = add->next;
				if (add != NULL)
					printf(", ");
			}
			print = 1;
		}
	}
	printf("}\n");
}
