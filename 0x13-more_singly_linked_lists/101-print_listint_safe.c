#include "lists.h"

/**
 * print_listint_safe - print a loop in SLL
 *
 * @head: pointer to the 1st node of the linked list
 *
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_n;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		l_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tmp == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
