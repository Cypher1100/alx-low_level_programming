#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node in the dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to be gotten.
 *
 * Return: NULL if the node doesn't exist.
 *         Otherwise - the address of the targeted node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
