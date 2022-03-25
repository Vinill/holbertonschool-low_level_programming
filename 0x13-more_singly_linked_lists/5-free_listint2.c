#include "lists.h"

/**
<<<<<<< HEAD
* free_listint - insert node at the end of the list
* @head: pointer to head of list
* Return: tmp
*/
void free_listint(listint_t *head)
{
	listint_t *tmp, *aux;

	aux = *head;

	while (head != NULL)
	{
		tmp = head;
		aux = aux->next;
		free (tmp);
	}
=======
 *free_listint2 - Function that frees a listint_t list
 *
 *@head: Pointer
 *
 *Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *actual, *next;

	if (head == NULL)
		return;

	actual = *head;
	while (actual != NULL && head != NULL)
	{
		next = actual;
		actual = actual->next;
		free(next);
	}

>>>>>>> 7a870168063ef2b482b9841c7e40073131cf3ef7
	*head = NULL;
}
