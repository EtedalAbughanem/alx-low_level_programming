/**
 * _strlen - returns length of a string
 * @s: pointer
 * Return: int
*/

#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
