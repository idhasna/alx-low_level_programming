#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * Return: 0 for big endian, 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
