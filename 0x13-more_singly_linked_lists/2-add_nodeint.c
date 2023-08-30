#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer
 * @n: list elemnt
 * Return: node address or null if empty
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return (temp);
}
