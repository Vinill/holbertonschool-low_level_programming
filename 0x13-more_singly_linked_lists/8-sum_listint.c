#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the
 *	data (n) of a listint_t linked list
 *@head: Pointer
 *
 *Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *num;

	num = head;

	if (head == NULL)
		return (0);

	while (num != NULL)
	{
		sum = sum + num->n;
		num = num->next;
	}
	return (sum);
}
