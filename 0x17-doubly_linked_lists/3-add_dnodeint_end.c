#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to first node
 * @n: data value of the new node
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *endNode = malloc(sizeof(dlistint_t));

	if (endNode == NULL)
	{
		free(endNode);
		return (NULL);
	}

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		(*head) = endNode;
		endNode->prev = NULL;
	}
	else
	{
		current = *head;
		while ((current)->next != NULL)
		{
			(current) = (current)->next;
		}
		(current)->next = endNode;
		endNode->prev = (current);
		/*endNode = (*current);*/
	}
	return (endNode);
}
