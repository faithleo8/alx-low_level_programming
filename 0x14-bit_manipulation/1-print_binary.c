#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int x, count = 0;
unsigned long int current_number;

for (x = 63; x >= 0; x--)
{
current_number = n >> x;

if (current_number & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
														}
if (!count)
_putchar('0');
}

