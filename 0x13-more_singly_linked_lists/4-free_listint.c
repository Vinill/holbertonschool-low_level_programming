#include "lists.h"

/**
<<<<<<< HEAD
* free_listint - insert node at the end of the list
* @head: pointer to head of list
* Return: tmp
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
=======
 *free_listint - Function that frees a listint_t list.
 *
 *@head: Pointer
 *
 *Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual);
		actual = next;
>>>>>>> 7a870168063ef2b482b9841c7e40073131cf3ef7
	}
}
