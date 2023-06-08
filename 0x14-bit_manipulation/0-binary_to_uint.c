#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
int num;
unsigned int dec_val = 0;
if (!b)
return (0);
for (num = 0; b[num]; num++)
{
if (b[num] < '0' || b[num] > '1')
return (0);
dec_val = 2 * dec_val + (b[num] - '0');
}
return (dec_val);
}
