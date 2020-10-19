#include "sort.h"

/**
 *insertion_sort_list - function that sort a double linked list
 *@list: double linked list to sort
 *Retun: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *back, *frw, *lead;
	int res = 0;

	if (list == NULL || *list == '\0')
		return;

	head = *list;
	for (; head->next != NULL; head = head->next)
	{
		frw = head->next;
		back = head->prev;
		res = swa(&back, &head, &frw, list);
		lead = head;
		while (res)
		{
			print_list(*list);
			res = swa(&back, &head, &frw, list);

		}
		head = lead;

	}

}

/**
 *swap - function that perfoms the swap of two nodes
 *@back: pointer to the back node
 *@head: pointer to the actual number to compare
 *@frw: pointer to the next node
 *@list: linked list to order
 *Return: 1 if sucess, 0 if not.
 */
int swa(listint_t **back, listint_t **head, listint_t **frw, listint_t **list)
{
	if ((*head)->next->n < (*head)->n)
	{
		if ((*head)->prev == NULL)
		{
			(*head)->next = (*frw)->next;
			(*head)->prev = *frw;
			(*frw)->prev = NULL;
			(*frw)->next = *head;
			(*head)->next->prev = *head;
			*list = *frw;
			*head = *frw;

		}

		else if ((*head)->next->next == NULL)
		{
			(*head)->next = NULL;
			(*head)->prev = *frw;
			(*frw)->prev = *back;
			(*frw)->next = *head;
			(*back)->next = *frw;
			*head = *back;
			*back = (*head)->prev;
		}

		else
		{
			(*head)->next = (*frw)->next;
			(*head)->prev = *frw;
			(*frw)->next = *head;
			(*frw)->prev = *back;
			(*back)->next = *frw;
			(*head)->next->prev = *head;
			*head = *back;
			*back = (*back)->prev;

		}
		return (1);
	}
	return (0);
}
