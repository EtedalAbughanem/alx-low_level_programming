#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 *
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shifting;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shifting = 0; (tmp >>= 1) > 0; shifting++)
		;

	for (; shifting >= 0; shifting--)
	{
		if ((n >> shifting) & 1)
			printf("1");
		else
			printf("0");
	}
}
