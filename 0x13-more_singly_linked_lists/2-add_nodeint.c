#include "lists.h"

/**
<<<<<<< HEAD
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
=======
 *add_nodeint - Function that adds a new node at
 *	the beginning of a listint_t list
 *
 *@head: Pointer
 *
 *@n: Numero que nos dan
 *
 *Return: newList
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newList;

	newList = malloc(sizeof(listint_t));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = *head;
	*head = newList;

	return (newList);
>>>>>>> 7a870168063ef2b482b9841c7e40073131cf3ef7
}
