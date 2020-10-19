#ifndef _SORT_
#define _SORT_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
int swap(listint_t **back, listint_t **head, listint_t **frw, listint_t **list);
void insertion_sort_list(listint_t **list);
void  selection_sort(int *array, size_t size);
unsigned int selection(int *array, unsigned int start, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array,  int p, int r, size_t size);
void arrange(int *array, int p, int r, size_t size);
#endif
