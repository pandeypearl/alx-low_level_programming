#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: double pointer to the head of the dlistint_t list
 * @n: value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *node = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	if (node == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (node->next != NULL)
		node = node->next;
	new->prev = node;
	node->next = new;

	return (new);
}
