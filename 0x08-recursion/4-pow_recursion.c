#include "main.h"

/**
 * _pow_recursion-function that returns the value raised to certain power
 *
 * @x:int
 *
 * @y:int
 *
 * Return:int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (n * _pow_recursion(x, y - 1));
}
