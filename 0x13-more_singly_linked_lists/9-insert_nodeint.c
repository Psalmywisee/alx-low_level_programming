#include "lists.h"

/**
* insert_nodeint_at_index - A function to insert a new node at a
* at a given position
* @head: pointer to the first node in the list_t
* @idx: index where the new node is added
* @n: data to insert in the new node
* Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newno;
	listint_t *loca = *head;

	newno = malloc(sizeof(listint_t));
	if (!newno || !head)
	return (NULL);

	newno->n = n;
	newno->next = NULL;

	if (idx == 0)
{
	newno->next = *head;
	*head = newno;
	return (newno);
}

for (i = 0; loca && i < idx; i++)
{
	 if (i == idx - 1)
{
	newno->next = loca->next;
	loca->next = newno;
	return (newno);
}
	else
	loca = loca->next;
}

	return (NULL);
}
