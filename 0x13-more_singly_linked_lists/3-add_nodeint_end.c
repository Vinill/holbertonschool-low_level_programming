#include "lists.h"

/**
<<<<<<< HEAD
 *add_nodeint_end - function that adds a new node at the end of a list_t list
 *
 *@head: pointer to head of list
 *
 *@n: string recived
 *
 *Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
=======
 *add_nodeint_end - function that adds a new node at the end of a listint_t lis
 *
 *@head: Pointer double
 *
 *@n: Numero que dan
 *
 *Return: new node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node, *last_pos;

	new_end_node = malloc(sizeof(listint_t));

	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		last_pos = *head;
		while (last_pos->next)
			last_pos = last_pos->next;

		last_pos->next = new_end_node;
	}
	return (new_end_node);
>>>>>>> 7a870168063ef2b482b9841c7e40073131cf3ef7
}
