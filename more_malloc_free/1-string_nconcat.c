#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length og string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
