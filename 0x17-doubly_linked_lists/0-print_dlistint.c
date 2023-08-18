#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint-t structure
 * @h: pointer to head of structure
 *
 * Return: the number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new;
	int n = 0;

	new = h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		n++;
		new = new->next;
	}

	return (n);
}
