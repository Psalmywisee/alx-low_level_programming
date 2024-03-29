#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked  listint_t
 * @head: first node in the linked list_t
 * Return:Sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
	sum += temp->n;
	temp = temp->next;
}

return (sum);
}
