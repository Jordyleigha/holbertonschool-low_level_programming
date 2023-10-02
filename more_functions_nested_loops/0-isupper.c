#include 'main.h'
/**
 * checks if character c is uppercase 
 *
 * Will Return 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
