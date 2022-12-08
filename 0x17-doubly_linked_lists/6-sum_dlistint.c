#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: Head of a dlistint_t list.
 *
 * Return: The sum total of all the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sumresult = 0;

	while (head)
	{
		sumresult += head->n;
		head = head->next;
	}

	return (sumresult);
}
