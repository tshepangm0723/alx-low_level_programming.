#include "lists.h"

/*
 * pop_listint - function that deletes the head of
 * node in a linked list
 * @head: head of list
 * Return: head of list
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	hnode = curr->n;
	h = curr->next;
	h = curr->next;
	free(curr);
	*head = h;

	return (hnode);
}
