#include "hash_tables.h"
/**
 * key_index - get the index at which a key/value should be
 * stored in array of a hasht table
 * @key: the key to get the index of
 * @size: the size of the array
 *
 * Return: the index of the key
 * Decription: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
