#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list
 * @head: pointer to the first node
 * @index: position at which the node should be deleted
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *to_delete;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index - 1)
		{
			if (temp->next != NULL)
			{
				to_delete = temp->next;
				temp->next = temp->next->next;
				if (temp->next != NULL)
					temp->next->prev = temp;
				free(to_delete);
				return (1);

			}
			else
			{
				return (-1);
			}
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
