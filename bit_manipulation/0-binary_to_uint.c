#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string containing the binary number
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nt = 0;
	int h = 0;

	if (!b)
		return (0);

	while (b[h] == '0' || b[h] == '1')
	{
		nt <<= 1;
		nt += b[h] - '0';
		h++;
	}
	return (nt);
}
