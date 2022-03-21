#include "lists.h"

/**
* add_nodeint -  dd node at beginning of the list
* @head: double pointer to head of list
* @n: string recieved
* Return: Head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
