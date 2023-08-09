#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 *@c: char
 *
 *@size: variable
 *
 *Return: pointer
*/

void *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	c = (char *)malloc(size * sizeof(char));

	if (c == 0)
	{
		return (NULL);
	}

	else
	{
		return (c);
	}

}
