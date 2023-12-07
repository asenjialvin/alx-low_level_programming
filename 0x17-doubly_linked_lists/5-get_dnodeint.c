#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: position of the node
 * Return: node or NULL if node does not exists
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		if (index == count)
		{
			return (node);
		}
		else
		{
			node = node->next;
			count++;
		}
	}
	return (NULL);
}
