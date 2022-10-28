#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer number to run check on
 * @index: index, starting from 0 of the bit to get
 *
 * Returns: the value of the bit at index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	
	if (index > 63)
		return (-1);
	
	mask = 1 << index;
	return ((n & mask) > 0);
}
