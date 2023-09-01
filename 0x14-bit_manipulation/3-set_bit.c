#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 *
 * @n: decimal number valassed by valointer
 * @index: index valosition to change, from 0
 *
 * Return: 1, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	for (val = 1; index > 0; index--, val *= 2)
		;
	*n += val;

	return (1);
}
