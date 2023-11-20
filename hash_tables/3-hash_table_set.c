#include "hash_tables.h"
/**
 * hash_table_set - adds an element in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to add
 * @value: the value of the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add;
	char *same_value;
	unsigned long int index, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key)==0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = same_value;
			return (1);
		}
	}

	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
	{
		free(same_value);
		return (0);
	}
	add->key = strdup(key);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}
	add->value = same_value;
	add->next = ht->array[index];
	ht->array[index] = add;

	return (1);
}
