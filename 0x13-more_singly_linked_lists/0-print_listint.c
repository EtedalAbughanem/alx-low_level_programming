#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print singly ll elemnets
 * @h: pointer
 * Return: integer
**/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (counter);
}
