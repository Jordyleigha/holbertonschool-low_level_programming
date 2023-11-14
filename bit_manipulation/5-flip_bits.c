#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one to another
 * @n: number one
 * @m: number two
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = n ^ m;
	int count = 0;

	while (x != 0)
	{
		if (x & 1)
		{
			count++;
		}
		x = x >> 1;
	}
	return (count);
}
