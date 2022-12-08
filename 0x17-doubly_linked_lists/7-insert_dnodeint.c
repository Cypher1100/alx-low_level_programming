#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given location.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The location where we insert the new node.
 * @n: Integer of the new node
 * Return: NULL If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *search = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		search = search->next;
		if (search == NULL)
			return (NULL);
	}

	if (search->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = search;
	newnode->next = search->next;
	search->next->prev = newnode;
	search->next = newnode;

	return (newnode);
}
