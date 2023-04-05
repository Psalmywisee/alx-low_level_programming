#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t
 * @h: Pointer to the first node in the linked list_t
 * Return: Elements in the freed list_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *loca;

	if (!h || !*h)
	return (0);

	while (*h)
{
	diff = *h - (*h)->next;
	if (diff > 0)
{
	loca = (*h)->next;
	free(*h);
	*h = loca;
	len++;
}
	else
{
	free(*h);
	*h = NULL;
	len++;
	break;
}
}

	*h = NULL;

	return (len);
}
