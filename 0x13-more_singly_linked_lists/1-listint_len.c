#include "lists.h"

/**
 * listint_len - function that returns number of nodes
 * @h: pointer
 * Return: integer
**/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
