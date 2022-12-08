#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The position of the node to be deleted.
 *
 * Return: 1 when successful
 *         Otherwise  -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *search = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (search == NULL)
			return (-1);
		search = search->next;
	}

	if (search == *head)
	{
		*head = search->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		search->prev->next = search->next;
		if (search->next != NULL)
			search->next->prev = search->prev;
	}

	free(search);
	return (1);
}
