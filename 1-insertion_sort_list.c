#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @list: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */

void insertion_sort_list(listint_t **list)
{
        if (*list == NULL || (*list)->next == NULL)
                return;

        listint_t *current = (*list)->next;

        while (current != NULL)
        {
                listint_t *temp = current->prev;

                while (temp != NULL && temp->n > current->n)
                {
			/* Swaps nodes if necessary */
                        swap_nodes(list, temp, current);

			/* Prints the list after each swap */
			print_list(*list);

			temp = current->prev;
		}

		current = current->next;
	}
}
