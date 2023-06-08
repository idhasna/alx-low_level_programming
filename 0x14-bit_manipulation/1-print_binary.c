#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Ruturn: void
 */
void print_binary(unsigned long int n)
{
int i, number = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
number++;
}
else if (number)
_putchar('0');
}
if (!number)
_putchar('0');
}
