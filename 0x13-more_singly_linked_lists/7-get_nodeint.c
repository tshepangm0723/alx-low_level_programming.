#include "lists.h"

/*
 * get_nodeint_at_index - function thta gets index node
 * @head: head of list
 * @index: index of node
 * Return: node at index, if node does not exists return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
