#include "lists.h"

/*
 * reverse_listint - function that reverse a linked list
 * @head: head of list
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *q;
	listint_t *m;

	q = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = q;
		q = *head;
		*head = m;
	}
	*head = q;
	return (*head);
}
