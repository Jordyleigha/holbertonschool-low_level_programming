#include "main.h"
/**
 * get_bit - bit that will be returned at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 28)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
