#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: position to insert node
 * @n: data for node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	if (idx == 0)
	{
		new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
