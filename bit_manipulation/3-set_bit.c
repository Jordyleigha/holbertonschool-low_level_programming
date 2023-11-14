#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to change
 * @index: index of the bit set to 1
 *
 * Return: 1 if it worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 28)
		return (-1);

	p = 1 << index;
	*n = (*n | p);

	return (1);
}
