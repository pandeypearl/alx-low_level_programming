#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: double pointer to the head of the dlistint_t list
 * @idx: index starting on 0, o which the new node must be placed
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *node = NULL;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	node = *h;
	if (node == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (idx - 1 != 0 && node->next != NULL)
	{
		idx = idx - 1;
		node = node->next;
	}
	if (idx == 1)
	{
		new->prev = node;
		new->next = node->next;
		node->next = new;
		if (new->next != NULL)
			(new->next)->prev = new;
		return (new);
	}
	return (NULL);
}
