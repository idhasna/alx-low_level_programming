#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @n: the number to index
 * @index: the bit to clear
 *
 * Return: 1 for successful, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1L << index) & *n);
	return (1);
}
