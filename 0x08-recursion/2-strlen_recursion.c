#include "main.h"

/**
 * _strlen_recursion-function that returns string length
 *
 * @s:pointer
 *
 * Return:int
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	n += _strlen_recursion(s + 1) + 1;
	return (n);
}
