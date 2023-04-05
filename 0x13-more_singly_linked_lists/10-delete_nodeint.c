#include "lists.h"

/*
 * delete_nodeint_at_index - function that deletes node
 * @head: head of  list
 * @index: index of node that will be deleted
 * Return: boolean value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last;
	listint_t *next;
	unsigned int j;

	last = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && last != NULL; j++)
		{
			last = last->next;
		}
	}

	if (last == NULL || (last->next == NULL && index != 0))
	{
		return (-1);
	}

	next = last->next;

	if (index != 0)
	{
		last->next = next->next;
		free(next);
	}
	else
	{
		free(last);
		*head = next;
	}
	return (1);
}
