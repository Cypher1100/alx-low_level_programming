#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked dlistint_t list.
 * @head: The head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *checker;

	while (head)
	{
		checker = head->next;
		free(head);
		head = checker;
	}
}
