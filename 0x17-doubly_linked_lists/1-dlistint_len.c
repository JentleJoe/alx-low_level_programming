#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a linked list
 * @h: pointer to head of the linked list
 *
 * Return: Number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t n = 0;

	new = h;
	while (new != NULL)
	{
		n++;
		new = new->next;
	}

	return (n);
}
