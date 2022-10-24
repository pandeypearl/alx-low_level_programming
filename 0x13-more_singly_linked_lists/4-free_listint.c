#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees linked list
 * @head: Head of linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
