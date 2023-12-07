#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in linked list
 * @head: pointer to the first node
 * Return: int (sum) of all node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
