#include "lists.h"

/**
 * dlistint_len - function counts the number of elements
 * in a doubly linked dlistint_t list.
 * @h: The head of the doubly linked listint_t list.
 *
 * Return: The total number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
