#include "lists.h"

/*
 * free_listint2 - function that frees a list
 * @head: head of list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *vas;

	if (head == NULL)
	{
	vas = *head;
	while ((temp = vas) != NULL)
	{
		vas = vas->next;
		free(temp);
	}
	*head = NULL;
}
}
