#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - A function to get the length of unique node
* in a looped listint_t linked list_t
* @head: A pointer to the head of the listint_t
* Return: 0 If the list is not looped
* Else - the number of unique nodes in the list_t
*/

	size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
{
	if (tortoise == hare)
{
	tortoise = head;
	while (tortoise != hare)
{
	nodes++;
	tortoise = tortoise->next;
	hare = hare->next;
}

	tortoise = tortoise->next;
	while (tortoise != hare)
{
	nodes++;
	tortoise = tortoise->next;
}

	return (nodes);
}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
}

	return (0);
}

/**
 * print_listint_safe - Code block ti Print a listint_t list
 * @head: A pointer to the head of the listint_t
 * Return: The number of nodes in the list_t
 */

	size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
{
	for (; head != NULL; nodes++)
{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
}
}

else
{
	for (index = 0; index < nodes; index++)
{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
}

	printf("-> [%p] %d\n", (void *)head, head->n);
}

	return (nodes);
}
