#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/* Function to swap two integers */
void swap_ints(int *xp, int *yp);
/* Function to perform Bubble Sort on an array of integers */
void bubble_sort(int *array, size_t size);
/* Function to swap two nodes in a doubly linked list */
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2);
/* Function to perform Insertion Sort on a doubly linked list */
void insertion_sort_list(listint_t **list);
/* Function to perform Selection Sort on an array of integers */
void selection_sort(int *array, size_t size);
#endif /* SORT_H */
