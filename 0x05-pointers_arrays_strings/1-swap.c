/**
 * swap_int - swap two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

#include "main.h"
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
